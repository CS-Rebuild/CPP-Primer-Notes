#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input = "";
    string prev = "";
    int cnt_max = 0;
    int cnt = 0;
    while (cin >> input) {
        if (input == prev) {
            ++cnt;
            cout << "input: " << input << " cnt: " << cnt << endl;
        } else {
            cnt = 1;
            prev = input;
        }
        cnt_max = cnt_max > cnt ? cnt_max : cnt;
    }
    
    cout << cnt_max << endl;

    return 0;
}
