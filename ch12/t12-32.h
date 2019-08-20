#ifndef T12_32_H
#define T12_32_H
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <memory>
#include "t12-22.h"

using line_no = StrBlob::size_type;
class QueryResult;
class TextQuery {
public:
    TextQuery(std::ifstream &);
    QueryResult query(const std::string &) const;
private:
    StrBlob file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

TextQuery::TextQuery(std::ifstream &is) : file(StrBlob()) {
    std::string text;
    while (std::getline(is, text)) {
        file.push_back(text);
        int n = file.size() - 1;
        std::istringstream line(text);
        std::string word;
        while (line >> word) {
            auto &lines = wm[word];
            if (!lines)
                lines.reset(new std::set<line_no>);
            lines->insert(n);
        }
    }
}

class QueryResult {
friend std::ostream &print(std::ostream &, const QueryResult &);
public:
    QueryResult(std::string s, std::shared_ptr<std::set<line_no>> p, StrBlob f) : sought(s), lines(p), file(f) {}
private:
    std::string sought;
    std::shared_ptr<std::set<line_no>> lines;
    StrBlob file;
};

QueryResult TextQuery::query(const std::string &sought) const {
    static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
    auto loc = wm.find(sought);
    if (loc == wm.end())
        return QueryResult(sought, nodata, file);
    else
        return QueryResult(sought, loc->second, file);

}

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending) {
    return (ctr > 1) ? word + ending : word;
}

std::ostream &print(std::ostream &os, const QueryResult &qr) {
    os << qr.sought << " occurs " << qr.lines->size() << " " << make_plural(qr.lines->size(), "time", "s") << std::endl;
    for (auto num : *qr.lines) {
        ConstStrBlobPtr sbp(qr.file, num);
        os << "\t(line " << num + 1 << ") " << sbp.deref() << std::endl;
    }
    return os;
}
#endif

