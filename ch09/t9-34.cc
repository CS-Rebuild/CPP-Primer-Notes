#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vi{0,1,2,3,4,5};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        cout << *iter << " ";
        if (*iter % 2)
            iter = vi.insert(iter, *iter);
        ++iter;
    }
    cout << endl;
    return 0;
}
