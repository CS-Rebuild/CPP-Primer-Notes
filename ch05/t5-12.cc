#include <iostream>
using namespace std;

int main() {
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned spaceCnt = 0, tableCnt = 0, newLineCnt = 0;
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;

    char ch;
    char prech = ' ';

    while (cin >> std::noskipws >> ch) {
        switch (ch) {
            case 'a': case 'A': ++aCnt; break;
            case 'e': case 'E': ++eCnt; break;
            case 'i': if (prech == 'f') ++fiCnt;
            case 'I': ++iCnt; break;
            case 'o': case 'O': ++oCnt; break;
            case 'u': case 'U': ++uCnt; break;
            case ' ': ++spaceCnt; break;
            case '\t': ++tableCnt; break;
            case '\n': ++newLineCnt; break;
            case 'f': if (prech == 'f') ++ffCnt; break;
            case 'l': if (prech == 'f') ++flCnt; break;
            default: break;
        }
        prech = ch;
    }

    cout << "a: \t" << aCnt << '\n'
         << "e: \t" << eCnt << '\n'
         << "i: \t" << iCnt << '\n'
         << "o: \t" << oCnt << '\n'
         << "space: \t" << spaceCnt << '\n'
         << "tab: \t" << tableCnt << '\n'
         << "newline: \t" << newLineCnt << '\n'
         << "ff: \t" << ffCnt << '\n'
         << "fi: \t" << fiCnt << '\n'
         << "fl: \t" << flCnt << endl;

    return 0;
}
