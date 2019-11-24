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
    base bobj;
    derived dobj;
    base *bp1 = &bobj;
    base *bp2 = &dobj;
    base &br1 = bobj;
    base &br2 = dobj;
    bobj.print(cout);
    dobj.print(cout);
    cout << bp1->name() << endl;
    cout << bp2->name() << endl;
    br1.print(cout);
    br2.print(cout);
}
