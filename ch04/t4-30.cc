#include <iostream>
using namespace std;

void f1() {}
double f2() {}
struct A{
    int mem[10];
};
A sa;
A *p = &sa;
int i = 0;

int x = 20, y = 20;
int a = 10, b = 20;

int main() {
    p->mem[i] = 100;

    cout << "before" << endl;
    cout << (sizeof x + y) << endl;
    cout << (sizeof p->mem[i]) << endl;
    cout << (sizeof a < b) << endl;
    cout << (sizeof f1()) << endl;
    cout << (sizeof f2()) << endl;
        
    cout << "after" << endl;
    cout << (sizeof (x) + y) << endl;
    cout << (sizeof (p->mem[i])) << endl;
    cout << (sizeof (a) < b) << endl;
    cout << (sizeof (f1())) << endl;
    cout << (sizeof (f2())) << endl;
    return 0;
}
