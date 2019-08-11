#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> svec{"abc", "efg", "hij"};
    vector<string>::iterator iter = svec.begin();
    cout << "*iter:" << *iter << endl;
    //cout << *iter++ << endl;
    cout << (*iter)++ << endl;
    //cout << *iter.empty() << endl;
    //cout << iter->empty() << endl;
    //cout << ++*iter << endl;
    //cout << iter++->empty() << endl;
    cout << "*iter:" << *iter << endl;

    return 0;
}
