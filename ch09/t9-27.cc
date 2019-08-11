#include <forward_list>
#include <iostream>
using namespace std;

int main() {
    forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
    forward_list<int>::iterator prev = flst.before_begin();
    forward_list<int>::iterator curr = flst.begin();
    while (curr != flst.end()) {
        if (*curr % 2)
            curr = flst.erase_after(prev);
        else {
            prev = curr;
            ++curr;
        }
    }
    for (auto &e : flst)
        cout << e << " ";
    cout << endl;
}
