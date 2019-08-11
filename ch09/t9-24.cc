#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> ivec{1,2,3,4};
    //! vector<int> ivec;
    cout << ivec.at(0) << endl;
    cout << ivec[0] << endl;
    cout << ivec.front() << endl;
    cout << *ivec.begin() << endl;

    ivec.at(1) = 10;
    cout << ivec.at(1) << endl;
    
    ivec[1] = 100;
    cout << ivec[1] << endl;

    ivec.front() = 1000;
    cout << ivec.front() << endl;

    *ivec.begin() = 10000;
    cout << *ivec.begin() << endl;
}
