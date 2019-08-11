#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<int> il{0,1,2,3,4,5,0,6,8,0,1,9};
    int idx = il.size() - 1;
    for (auto it = il.crbegin(); it != il.crend(); ++it) {
        if (*it == 0)
            break;
        --idx;
    }
    cout << idx << endl;
    return 0;
}
