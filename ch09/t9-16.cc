#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> l1 = {1,3,5,7,9,12};
    vector<int> v2 = {1,3,9};
    vector<int> v3 = {1,3,5,7};
    vector<int> v4 = {1,3,5,7,9,12};

    cout << (vector<int>(l1.begin(), l1.end()) < v2) << endl;
    cout << (vector<int>(l1.begin(), l1.end()) < v3) << endl;
    cout << (vector<int>(l1.begin(), l1.end()) == v4) << endl;
    cout << (vector<int>(l1.begin(), l1.end()) == v2) << endl;
}
