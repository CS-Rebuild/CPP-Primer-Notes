#include "Query.h"
#include "NotQuery.h"
#include "OrQuery.h"
#include "AndQuery.h"

int main() {
    chapter15::Query q = chapter15::Query("fiery") & chapter15::Query("bird") | chapter15::Query("wind");
}
