#ifndef WORDQUERY_H
#define WORDQUERY_H

#include "Query_base.h"
namespace chapter15 {
class WordQuery : public Query_base {
    friend class Query;
    WordQuery(const std::string &s) : query_word(s) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    QueryResult eval(const TextQuery &t) const {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return t.query(query_word);
    }
    std::string rep() const { 
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return query_word; 
    }
    std::string query_word;
};
}
#endif
