#include <iostream>
using namespace std;

int main() {
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;

    while (cin >> ch) {
        if (ch == 'a') ++aCnt;
        else if (ch == 'e') ++eCnt;
        else if (ch == 'i') ++iCnt;
        else if (ch == 'o') ++oCnt;
        else if (ch == 'u') ++uCnt;
        else ;
    }

    cout << "a: \t" << aCnt << '\n'
         << "e: \t" << eCnt << '\n'
         << "i: \t" << iCnt << '\n'
         << "o: \t" << oCnt << '\n'
         << "u: \t" << uCnt << endl;

    return 0;
}
