#include "Query.h"
#include "NotQuery.h"
#include "OrQuery.h"
#include "AndQuery.h"
#include <iostream>
using namespace std;
using namespace chapter15;
using namespace chapter10;
int main() {
    Query left("left"), right("right");
    Query_base *pqb1 = new AndQuery(left, right);
    Query_base *pqb2 = new OrQuery(left, right);

    if (typeid(*pqb1) == typeid(*pqb2)) {
        cout << "same" << endl;
    } else {
        cout << "different" << endl;
    } 
    if (typeid(*pqb1) == typeid(AndQuery)) {
        cout << "AndQuery" << endl;
    }
    if (typeid(*pqb2) == typeid(OrQuery)) {
        cout << "OrQuery" << endl;
    }
}
