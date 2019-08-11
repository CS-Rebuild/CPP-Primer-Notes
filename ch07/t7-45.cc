#include <vector>
using namespace std;

class NoDefault {
public:
    NoDefault(int a) { }
};

class C {
public:
    C() : mem(0) { }
private:
    NoDefault mem;
};


int main() {
    vector<C> vec(10);
}
