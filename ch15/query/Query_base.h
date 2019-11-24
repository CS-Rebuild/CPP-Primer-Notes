#ifndef QUERY_BASE_H
#define QUERY_BASE_H

#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
#include <type_traits>
#include <set>
#include "TextQuery.h"

class Query_base {
    friend class Query;
protected:
    //using line_no = TextQuery::line_no;
    virtual ~Query_base() = default;
private:
    virtual QueryResult eval(const TextQuery &) const = 0;
    virtual std::string rep() const = 0;
};

#endif

