#include "t12-19.h"
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);
    StrBlob sb;
    string line;
    while (getline(in, line)) {
        sb.push_back(line);
    }

    for (StrBlobPtr beg(sb.begin()), end(sb.end()); beg != end; beg.incr()) {
        cout << beg.deref() << endl;
    }

    return 0;
}
