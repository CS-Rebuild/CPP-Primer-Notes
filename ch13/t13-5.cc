#include <string>
#include <iostream>

using namespace std;

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()):ps(new std::string(s)), i(0) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    HasPtr(const HasPtr &hp):ps(new std::string(*hp.ps)), i(hp.i) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
private:
    std::string *ps;
    int i;
};

int main() {
    HasPtr hp("test");
    HasPtr hp_cp(hp);
}
