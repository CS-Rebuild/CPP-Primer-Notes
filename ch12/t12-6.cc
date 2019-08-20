#include <iostream>
#include <vector>

using namespace std;

vector<int> *my_alloc(void) {
    return new vector<int>;
}

void fill(vector<int> *pv) {
    int elem;
    while (cin >> elem)
        pv->push_back(elem);
}

void print(vector<int> *pv) {
    for (auto &e : *pv)
        cout << e << " ";
    cout << endl;
}

int main() {
    vector<int> *p = my_alloc();
    fill(p);
    print(p);
    delete p;

    return 0;
}
