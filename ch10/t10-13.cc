#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isShorter5(const string &s) {
    return s.size() < 5;
}


int main() {
    vector<string> svec{"aa", "ccc", "bbb", "bbbb", "eeeeee", "ffff", "gggggg", "hhhhh"};
    
    auto send = partition(svec.begin(), svec.end(), isShorter5);
    for (auto it = svec.begin(); it != svec.end(); ++it)
        cout << *it << " "; 
    cout << endl;

    for (auto it = send; it != svec.end(); ++it)
        cout << *it << " "; 
    cout << endl;
      

    return 0;
}
