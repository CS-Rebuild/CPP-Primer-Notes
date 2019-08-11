#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator search(vector<int> &ivec, int key) {
    for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        if (*it == key) {
            return it;
        }
    }
    return ivec.end();
}

int main() {
    vector<int> ivec{10,1,2,3,4,5,6,7,8,9};
    int key = 7;
    vector<int>::iterator ito = search(ivec, key); 
    if (ito == ivec.end())
        cout << "to end()" << endl;
    else 
        cout << *ito << endl;
    return 0;
}
