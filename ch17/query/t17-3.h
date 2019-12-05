#ifndef T17_3_H
#define T17_3_H

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <memory>
#include <tuple>

namespace chapter10 {
using line_no = std::vector<std::string>::size_type;
using Iter = std::set<line_no>::iterator;
using File = std::shared_ptr<std::vector<std::string>>;
using Line = std::shared_ptr<std::set<line_no>>;
using QueryResult = std::tuple<std::string, Line, File>;

class TextQuery {
public:
    TextQuery(std::ifstream &);
    QueryResult query(const std::string &) const;
private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

TextQuery::TextQuery(std::ifstream &is) : file(new std::vector<std::string>) {
    std::string text;
    while (std::getline(is, text)) {
        file->push_back(text);
        int n = file->size() - 1;
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
    os << std::get<0>(qr) << " occurs " << std::get<1>(qr)->size() << " " << make_plural(std::get<1>(qr)->size(), "time", "s") << std::endl;
    for (auto num : *std::get<1>(qr))
        os << "\t(line " << num + 1 << ") " << *(std::get<2>(qr)->begin() + num) << std::endl;
    return os;
}

void runQueries(std::ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        std::cout << "enter word to look for, or q to quit: ";
        std::string s;
        if (!(std::cin >> s) || s == "q") break;
        print(std::cout, tq.query(s)) << std::endl;
    }
}

}
#endif
