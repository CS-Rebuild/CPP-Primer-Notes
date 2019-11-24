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
    if (AndQuery *paq = dynamic_cast<AndQuery *>(pqb)) {
        cout << "success!" << endl;
    } else {
        cout << "failed!" << endl;
    }

}
