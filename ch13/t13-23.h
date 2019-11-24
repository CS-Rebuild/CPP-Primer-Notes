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
    HasPtr& operator=(const HasPtr &rhs) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        auto newp = new std::string(*rhs.ps);
        delete ps;
        ps = newp;
        i = rhs.i;
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

