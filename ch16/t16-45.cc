#include <iostream>
#include <vector>
using namespace std;
template <typename T> void g(T&& val) {vector<T> v;}

int main() {
    int i = 10;
    g(i);
    g(42);

}
