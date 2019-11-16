#include <stdexcept>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class MyArray {
public:
    MyArray(size_t sz) : ia(new int[sz]) {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    ~MyArray() { 
        cout << __PRETTY_FUNCTION__ << endl;
        if (ia) delete[] ia; 
    }
private:
    int *ia;
};

void exercise(int *b, int *e) {
    int i = 10;
    vector<int> v(b, e);
    MyArray ar(v.size());
    ifstream in("ints");
    throw i;
}

int main() {
    int a[10] = {0,1,2,3,4,5};
    exercise(&a[0], &a[9]);
}
