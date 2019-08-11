#include <iostream>
using namespace std;

int main() {
    int i = 10;
    auto f = [&i] () -> bool {
        if (i > 0) --i;
        return i == 0;
    };

    while (!f()) {
        cout << i << " ";
    }
    cout << i << endl;
}
