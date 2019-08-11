#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main() {
    vector<char> cvec;
    for(char a = 'a'; a != 'z' + 1; ++a)
        cvec.push_back(a);

    string s(cvec.cbegin(), cvec.cend());
    cout << s << endl;
    return 0;
}
