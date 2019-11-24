#include "t19-20.h"


int main(int argc, char *argv[]) {
    std::ifstream in(argv[1]);
    chapter10::runQueries(in);

    return 0;
}
