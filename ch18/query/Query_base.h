#ifndef QUERY_BASE_H
#define QUERY_BASE_H

#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
#include <type_traits>
#include <set>
#include "TextQuery.h"

using chapter10::QueryResult;
using chapter10::TextQuery;

namespace chapter15 {

class Query_base {
    friend class Query;
protected:
    //using line_no = TextQuery::line_no;
    virtual ~Query_base() = default;
private:
    virtual QueryResult eval(const TextQuery &) const = 0;
    virtual std::string rep() const = 0;
};
}
#endif

