#include <iostream>
using namespace std;

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) &arrPtr(int i) {
    return (i % 2) ? odd : even;
}

int main() {
    for (auto e : arrPtr(0))
        cout << e << " ";
    cout << endl;

    for (auto e : arrPtr(1))
        cout << e << " ";
    cout << endl;
   
     return 0;
}
