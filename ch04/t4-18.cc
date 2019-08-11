#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0)
        //cout << *pbeg++ << endl;
        cout << *++pbeg << endl;

    return 0;
}
