#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> ivec(cbegin(ia), cend(ia));
    list<int> ilst(cbegin(ia), cend(ia));
    
    auto it = ivec.begin();
    while (it != ivec.end()) {
        if (*it % 2) 
            ++it;
        else 
            it = ivec.erase(it);
    }
    for (auto &i : ivec) {
        cout << i << " ";
    }
    cout << endl;

    auto it2 = ilst.begin();
    while (it2 != ilst.end()) {
        if (*it2 % 2)
            it2 = ilst.erase(it2);
        else
            ++it2;
    }
    for (auto &i : ilst) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
