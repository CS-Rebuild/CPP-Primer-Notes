#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8};
    cout << "before: " << endl;
    for (auto i : ivec)
        cout << i << endl;

    for (auto &i : ivec) {
        i = (i % 2 == 0 ? i : i * 2);
    }

    cout << "after: " << endl;
    for (auto i : ivec)
        cout << i << endl;

    return 0;
}
