#include <list>
#include <iostream>
#include <string>
using namespace std;

int main() {
    list<string> lst1{"abc", "efg"};
    list<string>::const_reference ref1 = *lst1.begin();
    const list<string>::value_type &ref2 = *(++lst1.begin());

    cout << ref1 << " " << ref2 << endl;

    list<string>::reference ref3 = *lst1.begin();
    list<string>::value_type &ref4 = *(++lst1.begin());
    
    cout << ref3 << " " << ref4 << endl;
    
    ref3 = "abcd";
    ref4 = "efgh";
    cout << ref3 << " " << ref4 << endl;
    cout << *lst1.begin() << " " << *(++lst1.begin()) << endl;
    
}
