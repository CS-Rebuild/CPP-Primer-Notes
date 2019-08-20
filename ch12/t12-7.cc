#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> my_alloc(void) {
    return make_shared<vector<int>>();
}

void fill(shared_ptr<vector<int>> p) {
    int elem;
    while (cin >> elem)
        p->push_back(elem);
}

void print(shared_ptr<vector<int>> p) {
    for (auto &e : *p)
        cout << e << " ";
    cout << endl;
}

int main() {
    shared_ptr<vector<int>> p = my_alloc();
    fill(p);
    print(p);

    return 0;
}
