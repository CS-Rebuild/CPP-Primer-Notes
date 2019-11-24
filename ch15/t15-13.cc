#include <iostream>
#include <string>
using namespace std;

class base {
public:
    base(string str = "base") : basename(str) {}
    string name() { return basename; }
    virtual void print(ostream &os) { os << basename << endl; }
private:
    string basename;
};

class derived : public base {
public:
    derived(int e = 10) : base("derived"), i(e) {}
    void print(ostream &os) {
        base::print(os);
        os << " " << i << endl;
    }
private:
    int i;
};

int main() {
    derived d;
    base &b = d;
    b.print(cout);
}
