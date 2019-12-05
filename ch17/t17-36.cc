#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << uppercase << left;
    cout << setw(24) << "default format: " << 100 * sqrt(2.0) << '\n'
         << setw(24) << "scientific: " << scientific << 100 * sqrt(2.0) << '\n'
         << setw(24) << "fixed decimal: " << fixed << 100 * sqrt(2.0) << '\n'
         << setw(24) << "hexadecimal: " << hexfloat << 100 * sqrt(2.0) << '\n'
         << setw(24) << "use defaults: " << defaultfloat << 100 * sqrt(2.0) << "\n\n";
    cout << nouppercase << right;
}
