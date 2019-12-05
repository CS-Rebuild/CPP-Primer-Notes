#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << uppercase;
    cout << "default format: " << 100 * sqrt(2.0) << '\n'
         << "scientific: " << scientific << 100 * sqrt(2.0) << '\n'
         << "fixed decimal: " << fixed << 100 * sqrt(2.0) << '\n'
         << "hexadecimal: " << hexfloat << 100 * sqrt(2.0) << '\n'
         << "use defaults: " << defaultfloat << 100 * sqrt(2.0) << "\n\n";
    cout << nouppercase;
}
