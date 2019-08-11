#include <iostream>
using namespace std;

int main() {
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned spaceCnt = 0, tableCnt = 0, newLineCnt = 0;

    char ch;

    while (cin >> std::noskipws >> ch) {
        switch (ch) {
            case 'a': case 'A': ++aCnt; break;
            case 'e': case 'E': ++eCnt; break;
            case 'i': case 'I': ++iCnt; break;
            case 'o': case 'O': ++oCnt; break;
            case 'u': case 'U': ++uCnt; break;
            case ' ': ++spaceCnt; break;
            case '\t': ++tableCnt; break;
            case '\n': ++newLineCnt; break;
            default: break;
        }
    }

    cout << "a: \t" << aCnt << '\n'
         << "e: \t" << eCnt << '\n'
         << "i: \t" << iCnt << '\n'
         << "o: \t" << oCnt << '\n'
         << "space: \t" << spaceCnt << '\n'
         << "tab: \t" << tableCnt << '\n'
         << "newline: \t" << newLineCnt << endl;

    return 0;
}
