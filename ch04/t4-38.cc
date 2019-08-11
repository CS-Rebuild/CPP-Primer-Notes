#include <iostream>
using namespace std;

int main() {
    int i = 12, j = 22;
    double slope = static_cast<double>(j/i);
    cout << slope << endl;
    slope = static_cast<double>(j) / i;
    cout << slope << endl;

    return 0;
}
