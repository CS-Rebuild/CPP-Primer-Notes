#include <iostream>
#include <utility>
using namespace std;

template <typename F, typename T1, typename T2>
void flip(F f, T1 &&t1, T2 &&t2) {
    f(std::forward<T2>(t2), std::forward<T1>(t1));
} 

template <typename F, typename T1, typename T2>
void flip1(F f, T1 t1, T2 t2) {
    f(t2, t1);
}

template <typename F, typename T1, typename T2>
void flip2(F f, T1 &&t1, T2 &&t2) {
    f(t2, t1);
}

void f(int v1, int &v2) {
    cout << v1 << " " << ++v2 << endl;
}

void g(int &&i, int &j) {
    cout << i  << " " << j << endl;
}

int main() {
    int i = 10, j = 20;
    f(42, i);
    cout << "1: " << i << " " << j << endl;
    flip1(f, j, 42);
    cout << "2: " << i << " " << j << endl;
    //flip2(g, i, 42);
    cout << "3: " << i << " " << j << endl;
    flip(g, i, 42);
    cout << "4: " << i << " " << j << endl;
    
    g(43, i);
    int &&k = 54;
    g(k, i);
    
}
