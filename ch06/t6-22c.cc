#include <iostream>
using namespace std;

void swap(int **pa, int **pb) {
    int *tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main() {
    int a = 1, b = 2;
    int *pa = &a;
    int *pb = &b;
    cout << "Before" << endl;
    cout <<"*pa: " << *pa << "\tpa: " << pa << "\t&pa: " << &pa << endl;
    cout <<"*pb: " << *pb << "\tpb: " << pb << "\t&pb: " << &pb << endl;
    cout << "a: " << a << "\t&a: " << &a << endl;
    cout << "b: " << b << "\t&b: " << &b << endl;
    swap(&&a, &&b);
    cout << "After" << endl;
    cout <<"*pa: " << *pa << "\tpa: " << pa << "\t&pa: " << &pa << endl;
    cout <<"*pb: " << *pb << "\tpb: " << pb << "\t&pb: " << &pb << endl;
    cout << "a: " << a << "\t&a: " << &a << endl;
    cout << "b: " << b << "\t&b: " << &b << endl;
    return 0;
}
