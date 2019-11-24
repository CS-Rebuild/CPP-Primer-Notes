#include "StrVec.h"
#include <iostream>

int main() {
    StrVec svec{"abc", "efg", "hij"};
#if 1
    const StrVec cvec = svec;
    if (svec.size() && !svec[0].empty()) {
        svec[0] = "zero";
        //cvec[0] = "Zip";
    }
    std::cout << svec[0] << std::endl;
    std::cout << cvec[0] << std::endl;
#endif
}
