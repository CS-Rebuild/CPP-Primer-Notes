#ifndef BINARYQUERY_H
#define BINARYQUERY_H

#include "Query_base.h"
#include "Query.h"

class BinaryQuery : public Query_base {
protected:
    BinaryQuery(const Query &l, const Query &r, std::string s) : 
        lhs(l), rhs(r), opSym(s) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    std::string rep() const {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return "(" + lhs.rep() + " "
                   + opSym + " "
                   + rhs.rep() + ")";
    }
    Query lhs, rhs;
    std::string opSym;
};

#endif
