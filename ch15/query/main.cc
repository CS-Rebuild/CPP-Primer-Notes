#include "Query.h"
#include "NotQuery.h"
#include "OrQuery.h"
#include "AndQuery.h"

int main() {
    Query q = Query("fiery") & Query("bird") | Query("wind");
}
