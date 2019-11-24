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
    HasPtr& operator=(const HasPtr &hp) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        ps = new std::string(*hp.ps);
        i = hp.i;
        return *this;
    }
    ~HasPtr() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        delete ps;
    }
private:
    std::string *ps;
    int i;
};

int main() {
    HasPtr hp("test");
    {
        HasPtr hp_cp(hp);
    }
    HasPtr hp_as;
    hp_as = hp;
}
