#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << "default bool values: " << true << " " << false
         << "\nalpha bool values: " << boolalpha
         << true << " " << false << noboolalpha << endl;
    cout << showbase;
    cout << "default: " << 20 << " " << 1024 << endl;
    cout << "in octal: " << oct << 20 << " " << 1024 << endl;
    cout << "in hex: " << hex << 20 << " " << 1024 << endl;
    cout << "in decimal: " << dec << 20 << " " << 1024 << endl;
    cout << noshowbase;

    cout << uppercase << showbase << hex
         << "printed in hexadecimal: " << 20 << " " << 1024 
         << nouppercase << noshowbase << dec << endl;

    cout << "Precision: " << cout.precision()
         << ", Value: " << sqrt(2.0) << endl;
    cout.precision(12);
    cout << "Precision: " << cout.precision()
         << ", Value: " << sqrt(2.0) << endl;
    cout << setprecision(3);
    cout << "Precision: " << cout.precision()
         << ", Value: " << sqrt(2.0) << endl;

    cout << "default format: " << 100 * sqrt(2.0) << '\n'
         << "scientific: " << scientific << 100 * sqrt(2.0) << '\n'
         << "fixed decimal: " << fixed << 100 * sqrt(2.0) << '\n'
         << "hexadecimal: " << hexfloat << 100 * sqrt(2.0) << '\n'
         << "use defaults: " << defaultfloat << 100 * sqrt(2.0) << "\n\n";

    cout << 10.0 << endl;
    cout << showpoint << 10.0 << noshowpoint << endl;

    int i = -16;
    double d = 3.14159;
    
    cout << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';

    cout << left
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n'
         << right;
    
    cout << right
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';

    cout << internal
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';

    cout << setfill('#')
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n'
         << setfill(' ');
}
