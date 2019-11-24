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
    Query_base *pqb = new AndQuery(left, right);
    try {
        AndQuery &raq = dynamic_cast<AndQuery &>(*pqb);
        cout << "success!" << endl;
    } catch (std::bad_cast &bc) {
        cout << "failed!: " << bc.what() << endl;
    }

}
