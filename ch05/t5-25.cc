#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;

    while( cin >> a >> b) {
        try {
            if (b == 0)
                throw runtime_error("division by 0");
            cout << a / b << endl;
        } catch (runtime_error err) {
            cout << err.what() << endl;
            cout << "Try Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;        
        }   
    }
    return 0;
}
