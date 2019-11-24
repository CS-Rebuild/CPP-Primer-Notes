#include <iostream>
using namespace std;

class Point {
public:
    Point() {}
    Point(const Point &p) { cout << __PRETTY_FUNCTION__ << endl; }
};

Point global;
Point foo_bar(Point arg) {
    Point local = arg, *heap = new Point(global);
    *heap = local;
    Point pa[4] = { local, *heap };
    return *heap;
}

int main() {
    Point p1;
    foo_bar(p1);
}
