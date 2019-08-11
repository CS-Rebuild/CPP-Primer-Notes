#include <iostream>
using namespace std;

int main() {
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;

    while (cin >> ch) {
        switch (ch) {
            case 'a': case 'A': ++aCnt; break;
            case 'e': case 'E': ++eCnt; break;
            case 'i': case 'I': ++iCnt; break;
            case 'o': case 'O': ++oCnt; break;
            case 'u': case 'U': ++uCnt; break;
            default: break;
        }
    }

    cout << "a: \t" << aCnt << '\n'
         << "e: \t" << eCnt << '\n'
         << "i: \t" << iCnt << '\n'
         << "o: \t" << oCnt << '\n'
         << "u: \t" << uCnt << endl;

    return 0;
}
