#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <memory>

using namespace std;

struct Text {
    vector<string> lv;
    map<string, pair<set<int>, int>> dict;
};

class QueryResult {
public:
    QueryResult(weak_ptr<Text> _data, string _key) : data(_data), key(_key) {}
    weak_ptr<Text> data;
    string key;
};

class TextQuery {
public:
    TextQuery(ifstream &infile) : data(make_shared<Text>()){ populate(infile); }
    void populate(ifstream &infile);
    QueryResult query(const string &key) const;
private: 
    friend class QueryResult;
    shared_ptr<Text> data;
};

void TextQuery::populate(ifstream &infile) {
    string line;
    size_t lno = 0;
    while (getline(infile, line)) {
        data->lv.push_back(line);
        istringstream record(line);
        string word;
        while (record >> word) {
            data->dict[word].first.insert(lno);
            data->dict[word].second++;
        }
        ++lno;
    }
}

QueryResult TextQuery::query(const string &key) const {
    if (data->dict.find(key) != data->dict.cend()) { 
        return QueryResult(data, key);
    }
    return QueryResult(make_shared<Text>(), key);
}

ostream& print(ostream &os, const QueryResult &rst) {
    auto p = rst.data;
    if (shared_ptr<Text> tp = p.lock()) {
        os << rst.key << " occurs " << tp->dict[rst.key].second << " times " << endl;
        for (const auto &e : tp->dict[rst.key].first)
            os << "\t" << "(line " << e << ")\t" << tp->lv[e] << endl;
    } else {
        os << rst.key << " occurs " << 0 << " times" << endl;
    }
    return os; 
}

void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);
    runQueries(in);

    return 0;
}
