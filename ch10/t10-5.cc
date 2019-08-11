#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    char ca[] = "abcdefgh";
    //char cb[] = "abcdefgh"; // 1
    char cb[] = "abcdefghi"; // 0
    auto outc = equal(cbegin(ca), cend(ca), cbegin(cb));
    cout << outc << endl;
    string sa{"abcdefgh"};
    //string sb{"abcdefgh"}; // 1
    string sb{"abcdefghi"}; // 1
    auto outs = equal(cbegin(sa), cend(sa), cbegin(sb));
    cout << outs << endl;
    
    vector<const char *> cveca{"aaa", "bbb", "ccc"};
    //vector<const char *> cvecb{"aaa", "bbb", "ccc"}; // 1
    vector<const char *> cvecb{"aaa", "bbb", "ccc", "ddd"};
    auto outvc = equal(cveca.cbegin(), cveca.cend(), cvecb.cbegin());
    cout << outvc << endl;

    vector<string> sveca{"aaa", "bbb", "ccc"};
    //vector<string> svecb{"aaa", "bbb", "ccc"}; // 1
    vector<string> svecb{"aaa", "bbb", "ccc", "ddd"};
    auto outvs = equal(sveca.cbegin(), sveca.cend(), svecb.cbegin());
    cout << outvs << endl;

    return 0;
}
