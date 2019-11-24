#include <iostream>
#include <string>
#include <memory> 

using namespace std;

class DebugDelete {
public:
    DebugDelete(std::ostream &s = std::cerr) : os(s) {}
    template <typename T> void operator() (T *p) const {
        os << "deleting unique_ptr" << std::endl;
        delete p;
    }
private:
    std::ostream &os;
};

int main() {
    double *p = new double;
    DebugDelete d;
    d(p);

    int *ip = new int;
    DebugDelete()(ip);

    unique_ptr<int, DebugDelete> sp1(new int, DebugDelete());
    unique_ptr<string, DebugDelete> sp2(new string, DebugDelete());
}
