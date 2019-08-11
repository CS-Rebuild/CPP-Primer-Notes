#include <iostream>
using namespace std;

int main() {
    // Void
    cout << "void: " << sizeof(void) << endl;
    cout << "void *: " << sizeof(void *) << endl;
    cout << "std::nullptr_t: " << sizeof(std::nullptr_t) << endl;
    // Boolean
    cout << "bool: " << sizeof(bool) << endl;
    // Integer

    /// short, short int, signed short, signed short int
    cout << "short int: " << sizeof(short int) << endl;
    /// unsigned short, unsigned short int
    cout << "unsigned short int: " << sizeof(unsigned short int) << endl; 
    /// int, signed, signed int
    cout << "int: " << sizeof(int) << endl;
    /// long, long int, signed long, signed long int
    cout << "long int: " << sizeof(long int) << endl;
    /// unsigned long, unsigned long int
    cout << "unsigned long int: " << sizeof(unsigned long int) << endl;
    /// long long, long long int, signed long long, signed long long int
    cout << "long long int: " << sizeof(long long int) << endl;
    /// unsigned long long, unsigned long long int
    cout << "unsigned long long int: " << sizeof(unsigned long long int) << endl;
    
    // Character
    
    cout << "char: " << sizeof(char) << endl;
    cout << "wchar_t: " << sizeof(wchar_t) << endl;
    //cout << "char8_t " << sizeof(char8_t) << endl;
    cout << "char16_t: " << sizeof(char16_t) << endl;
    cout << "char32_t: " << sizeof(char32_t) << endl;

    // Floating point
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    return 0;
}
