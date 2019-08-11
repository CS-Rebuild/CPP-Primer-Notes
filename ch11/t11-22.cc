#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main() {
    map<string, vector<int>> m;
    pair<map<string, vector<int>>::iterator, bool> rst = m.insert(pair<string, vector<int>>({"abc", {1,2,3,4}}));
    
    map<string, vector<int>>::iterator it = m.begin();
    cout << "key: " << it->first << endl;
    for (const auto &e : it->second)
        cout << "value: " << e << endl;

    return 0;
}
