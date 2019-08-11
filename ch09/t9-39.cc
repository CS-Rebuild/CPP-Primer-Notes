#include <vector>
#include <string>
#include <iostream>
using namespace std;

void print(const vector<string> &svec) {
      cout << " svec: size: " << svec.size() << " capacity: " << svec.capacity() << endl;
}

int main() {
    vector<string> svec;
    print(svec);
    svec.reserve(10);
    print(svec);
    string word;
    while (cin >> word)
        svec.push_back(word);
    print(svec);
    svec.resize(svec.size() + svec.size() / 2);
    print(svec);
    return 0;
}
