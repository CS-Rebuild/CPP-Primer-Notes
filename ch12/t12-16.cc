#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> p1(new int(3));
    unique_ptr<int> p2(p1);
    unique_ptr<int> p3;
    p3 = p1;

    return 0;
}
