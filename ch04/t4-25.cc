#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int a = ~'q' << 6;
    cout << sizeof(a) << endl;
    cout << bitset<sizeof(a) * 8>('q') << endl;
    cout << bitset<sizeof(a) * 8>(~'q') << endl;
    cout << bitset<sizeof(a) * 8>(a) << endl;
    
    return 0;
}
