#include "t12-22.h"
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);
    StrBlob sb;
    string line;
    while (getline(in, line)) {
        sb.push_back(line);
    }

    for (ConstStrBlobPtr beg(sb.begin()), end(sb.end()); beg != end; beg.incr()) {
        cout << beg.deref() << endl;
    }

    const StrBlob sb2 {"abc", "efg", "hij"};
    for (ConstStrBlobPtr beg(sb2.begin()), end(sb2.end()); beg != end; beg.incr()) {
        cout << beg.deref() << endl;
    }

    return 0;
}
