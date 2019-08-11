#include <iostream>
using namespace std;
int fun() {
    static int s1 = 0;
    return s1++;
}
int main() {
    for (int i = 0; i < 5; ++i)
        cout << fun() << endl;

    return 0;
}
