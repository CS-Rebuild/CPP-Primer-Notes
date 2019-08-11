#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned long ul1 = 3, ul2 = 7;
    cout << sizeof(ul1) << endl;
    constexpr size_t max_bit = sizeof(ul1) * 8;
    cout << bitset<max_bit>(ul1 & ul2) << endl;
    cout << bitset<max_bit>(ul1 | ul2) << endl;
    cout << (ul1 && ul2) << endl;
    cout << (ul1 || ul2) << endl;
    return 0;
}
