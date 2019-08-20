#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cin >> size;
    char *s = new char[size+1];
    //cout << endl;
    cin >> s;
    cout << s << endl;
    delete [] s;
    return 0;
}
