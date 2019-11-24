#include "compute.h"
#include <iostream>
using namespace std;
double compute(double *d, double b) {
    cout << __PRETTY_FUNCTION__ << endl;
}

int main() {
    int i = 20;
    double d = 10.2;
    compute(&i, 4);
    compute(&d, 8.2);
}
