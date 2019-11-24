#ifndef QUERY_H
#define QUERY_H
#include <string>
#include <memory>
#include <iostream>
#include "Query_base.h"
#include "WordQuery.h"

class Query {
    friend Query operator~(const Query &);
    friend Query operator|(const Query &, const Query &);
    friend Query operator&(const Query &, const Query &);
public:
    Query(const std::string &s) : q(new WordQuery(s)) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    QueryResult eval(const TextQuery &t) const {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return q->eval(t);
    }
    std::string rep() const {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return q->rep();
    }
private:
    Query(std::shared_ptr<Query_base> query) : q(query) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    std::shared_ptr<Query_base> q;
};

std::ostream& operator<<(std::ostream &os, const Query &query) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return os << query.rep();
}

#endif

