#include <iostream>
#include <vector>
using namespace std;
int fun(int a, int b);
//using PF = int(*)(int, int);
vector<int (*)(int, int)> fv;
//vector<PF> fv;

int my_add(int a, int b) {
    return a + b;
}

int my_sub(int a, int b) {
    return a - b;
}

int my_mul(int a, int b) {
    return a * b;
}

int my_div(int a, int b) {
    return a / b;
}

int main() {
    fv.push_back(my_add);
    fv.push_back(my_sub);
    fv.push_back(my_mul);
    fv.push_back(my_div);

    for (auto f : fv)
        cout << f(20, 10) << endl;
    return 0;
}
