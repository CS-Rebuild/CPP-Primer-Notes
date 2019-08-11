#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    map<string, vector<int>> m{{"abc", {1,2,3}}, {"efg", {4,5,6}}};

    map<string, vector<int>>::iterator rst = m.find("efg");
    if (rst != m.end())
        for (auto &e : rst->second)
            cout << e << " ";
    cout << endl;

    return 0;
}
