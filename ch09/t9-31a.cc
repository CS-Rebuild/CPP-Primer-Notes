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

void print(const list<int> &li) {
    for (const auto &e : li)
        cout << e << " ";
    cout << endl;
}

void print(const forward_list<int> &lsti) {
    for (const auto &e : lsti)
        cout << e << " ";
    cout << endl;
}

int main() {
    list<int> li = {0,1,2,3,4,5,6,7,8,9};
    print(li);
    auto iter = li.begin();
    while (iter != li.end()) {
        if (*iter % 2) {
            iter = li.insert(iter, *iter);
            iter++; iter++;
        } else {
            iter = li.erase(iter);
        }
    }
    print(li);    
}
