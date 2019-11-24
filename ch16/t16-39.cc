#include <iostream>
#include <string>
using namespace std;

template <typename T>
int compare(const T &v1, const T &v2) {
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int main() {
    cout << compare(1, 2) << endl;
    //! cout << compare(3, 2.5) << endl;
    cout << compare(2.5, 2.8) << endl;
    cout << compare("abcde", "abcd") << endl;
    cout << compare<string>("abcde", "abcd") << endl;
}
