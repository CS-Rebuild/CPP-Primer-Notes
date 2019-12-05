#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
    bitset<64> bitvec(32);
    bitset<32> bv(1010101);
    string bstr;
    cin >> bstr;
    bitset<8> bvs(bstr);
    cout << bitvec << endl;
    for (int i = 63; i >= 0; --i)
        cout << bitvec[i];
    cout << endl;

    cout << bv << endl;
    for (int i = 31; i >= 0; --i)
        cout << bv[i];
    cout << endl;

    cout << bvs << endl;
    for (int i = 7; i >= 0; --i)
        cout << bvs[i];
    cout << endl;
}
