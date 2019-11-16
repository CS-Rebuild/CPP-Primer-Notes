#include <stdexcept>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void exercise(int *b, int *e) {
    int i = 10;
    vector<int> v(b, e);
    int *p = new int[v.size()];
    try {
        ifstream in("ints");
        throw i;
        cout << "not here" << endl;
    }
    catch (int e) {
        cout << "here" << endl;
        delete p;
    }
}

int main() {
    int a[10] = {0,1,2,3,4,5};
    exercise(&a[0], &a[9]);
}
