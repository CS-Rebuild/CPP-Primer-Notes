#include <vector>
#include <forward_list>
#include <list>
#include <iostream>
using namespace std;

void print(const vector<int> &vi) {
    for (const auto &e : vi)
        cout << e << " ";
    cout << endl;
}

void print(const list<int> &vi) {
    for (const auto &e : vi)
        cout << e << " ";
    cout << endl;
}

void print(const forward_list<int> &vi) {
    for (const auto &e : vi)
        cout << e << " ";
    cout << endl;
}

int main() {
    vector<int> vi = {11, 0,1,2,3,4,5,6,7,8,9};
    print(vi);
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter++);
            iter += 1;
        } else {
            iter = vi.erase(iter);
        }
    }
    print(vi);    
}
