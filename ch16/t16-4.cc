#include <vector>
#include <string>
#include <list>
#include <iostream>

using namespace std;

template <typename Iter, typename T>
Iter find(Iter first, Iter last, const T &k) {
    while (first != last) {
        if (*first == k) return first;
        ++first;
    }
    return last;
}

int main() {
    vector<int> ivec{1,2,3,4,5,6,7,8};
    list<string> sl{"abc", "efg", "hij"};
    auto it1 = find(ivec.begin(), ivec.end(), 3);
    if (it1 != ivec.end()) cout << *it1 << endl;
    else cout << "Not Found" << endl;
    auto it2 = find(ivec.begin(), ivec.end(), 0);
    if (it2 != ivec.end()) cout << *it2 << endl;
    else cout << "Not Found" << endl;
    auto it3 = find(sl.begin(), sl.end(), "abc");
    if (it3 != sl.end()) cout << *it3 << endl;
    else cout << "Not Found" << endl;
    auto it4 = find(sl.begin(), sl.end(), "abd");
    if (it4 != sl.end()) cout << *it4 << endl;
    else cout << "Not Found" << endl;
}
