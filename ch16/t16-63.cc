#include <vector>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T>
int noccur(const vector<T> &vec, const T& val) {
    int occur = 0;
    for (auto &e : vec) {
        if (e == val)
            occur++;
    }
    return occur;
}

template <>
int noccur(const vector<const char *> &vec, const char * const &val) {
    int occur = 0;
    for (auto &e : vec) {
        if (0 == strcmp(e, val))
            occur++;
    }
    return occur;
}

int main() {
    vector<double> dvec{3.14, 3.14, 2.5, 6.2, 7.32};
    vector<int> ivec{1, 2, 3, 4, 5, 5, 6};
    vector<string> svec{"abc", "abc", "efg", "hig"};
    cout << noccur(dvec, 3.14) << endl;
    cout << noccur(ivec, 5) << endl;
    cout << noccur(svec, string("abc")) << endl;
    vector<const char *> cvec = {"abc", "abc", "efg", "hig"};
    cout << noccur(cvec, cvec[1]) << endl;
}
