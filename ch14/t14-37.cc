#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class myequal {
public:
    myequal(int e) : element(e) {}
    bool operator()(int e) {
        return e == element;
    }
private:
    int element;
};

int main() {
    vector<int> ivec = {1,2,3,4,5,6,6,8,6,10};
    replace_if(ivec.begin(), ivec.end(), myequal(6), 20);
    for (const auto e : ivec) {
        cout << e << " ";
    }
    cout << endl;
}
