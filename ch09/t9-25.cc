#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> ivec{1,2,3,4,5};
    auto elem1 = ivec.begin() + 1;
    auto elem2 = ivec.end() - 1;
    ivec.erase(elem1, elem2);
    for (auto &i : ivec)
        cout << i << " ";
    cout << endl;

    ivec = {1,2,3,4,5};
    elem1 = ivec.begin() + 1;
    elem2 = ivec.end();
    ivec.erase(elem1, elem2);
    for (auto &i : ivec)
        cout << i << " ";
    cout << endl;

    ivec = {1,2,3,4,5};
    elem1 = ivec.begin() + 1;
    elem2 = ivec.begin() + 1;
    ivec.erase(elem1, elem2);
    for (auto &i : ivec)
        cout << i << " ";
    cout << endl;

    ivec = {1,2,3,4,5};
    elem1 = ivec.end();
    elem2 = ivec.end();
    ivec.erase(elem1, elem2);
    for (auto &i : ivec)
        cout << i << " ";
    cout << endl;
}
