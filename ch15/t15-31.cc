#include <iostream>
#include <string>
#include <memory>
#include "../ch12/t12-33.h"

using namespace std;
class Query;
class WordQuery;
class OrQuery;
class AndQuery;
class NotQuery;
class Query_base {
    friend class Query;
protected:
    //using line_no = TextQuery::line_no;
    virtual ~Query_base() = default;
private:
    virtual QueryResult eval(const TextQuery &) const = 0;
    virtual std::string rep() const = 0;
};

class Query {
    friend Query operator~(const Query &);
    friend Query operator|(const Query &, const Query &);
    friend Query operator&(const Query &, const Query &);
public:
    Query(const std::string &s) : q(new WordQuery(s)) {        cout << __PRETTY_FUNCTION__ << endl;
    }
    QueryResult eval(const TextQuery &t) const {
        cout << __PRETTY_FUNCTION__ << endl;
        return q->eval(t);
    }
    std::string rep() const {
        cout << __PRETTY_FUNCTION__ << endl;
        return q->rep();
    }
private:
    Query(std::shared_ptr<Query_base> query) : q(query) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    std::shared_ptr<Query_base> q;
};

class WordQuery : public Query_base {
    friend class Query;
    WordQuery(const std::string &s) : query_word(s) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    QueryResult eval(const TextQuery &t) const {
        return t.query(query_word);
    }
    std::string rep() const { 
        cout << __PRETTY_FUNCTION__ << endl;
        return query_word; 
    }
    std::string query_word;
};

class NotQuery : public Query_base {
    friend Query operator~(const Query &);
    NotQuery(const Query &q) : query(q) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    std::string rep() const {
        cout << __PRETTY_FUNCTION__ << endl;
        return "~(" + query.rep() + ")";
    }
    QueryResult eval(const TextQuery &) const;
    Query query;
};

inline Query operator~(const Query &operand) {
    cout << __PRETTY_FUNCTION__ << endl;
    return std::shared_ptr<Query_base>(new NotQuery(operand));
}

class BinaryQuery : public Query_base {
protected:
    BinaryQuery(const Query &l, const Query &r, std::string s) : 
        lhs(l), rhs(r), opSym(s) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    std::string rep() const {
        cout << __PRETTY_FUNCTION__ << endl;
        return "(" + lhs.rep() + " "
                   + opSym + " "
                   + rhs.rep() + ")";
    }
    Query lhs, rhs;
    std::string opSym;
};

class AndQuery : public BinaryQuery {
    friend Query operator& (const Query &, const Query &);
    AndQuery(const Query &left, const Query &right) : BinaryQuery(left, right, "&") {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    QueryResult eval(const TextQuery &) const;
};

inline Query operator& (const Query &lhs, const Query &rhs) {
    cout << __PRETTY_FUNCTION__ << endl;
    return std::shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

class OrQuery : public BinaryQuery {
    friend Query operator| (const Query &, const Query &);
    OrQuery(const Query &left, const Query &right) : BinaryQuery(left, right, "|") {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    QueryResult eval(const TextQuery &) const;
};

inline Query operator| (const Query &lhs, const Query &rhs) {
    cout << __PRETTY_FUNCTION__ << endl;
    return std::shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

std::ostream& operator<<(std::ostream &os, const Query &query) {
    cout << __PRETTY_FUNCTION__ << endl;
    return os << query.rep();
}

int main() {
//    Query q = Query("fiery") & Query("bird") | Query("wind");
}
