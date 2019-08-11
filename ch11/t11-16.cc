#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m;
    //map<int, int>::iterator it = m.begin();
    m[2] = 4;
    cout << m[2] << endl;
    //*it = {3, 4};
    //it->first = 4;
    map<int, int>::iterator it = m.begin();
    it->second = 5;
    cout << it->first << " " << it->second << endl; 
    cout << m[2] << endl;
    return 0;
}
