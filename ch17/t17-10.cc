#include <bitset>
#include <iostream>

using namespace std;

int main() {
    int b = (1<<1) | (1<<2) | (1<<3) | (1<<5) | (1<<8) | (1<<13) | (1<<21);
    bitset<32> bs1(b);
    cout << bs1 << endl;

    bitset<32> bs2;
    bs2.set(1); bs2.set(2); bs2.set(3); bs2.set(5);
    bs2.set(8); bs2.set(13); bs2.set(21);
    cout << bs2 << endl;
}
