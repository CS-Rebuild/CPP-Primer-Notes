#include <iostream>
using namespace std;

int calc (int &a, int &b) {
    cout << __PRETTY_FUNCTION__ << endl;
    return 0;
}
int calc (const int &a, const int &b) {
    cout << __PRETTY_FUNCTION__ << endl;
    return 0;
}
int calc (char *a, char *b) {
    cout << __PRETTY_FUNCTION__ << endl;
    return 0;
}
int calc (const char *a, const char *b) {
    cout << __PRETTY_FUNCTION__ << endl;
    return 0;
}
/*
int calc (char* const a, char* const b) {
    cout << __PRETTY_FUNCTION__ << endl;
    return 0;
}
*/
int main() {
    int ia, ib;
    char ca, cb;
    char *const pca = 0;
    char *const pcb = 0;

    calc(ia, ib);
    calc(1, 2);
    calc(&ca, &cb);
    calc("ab", "cd");
    calc(pca, pcb);

    return 0;
}
