#include <iostream>
#include <string>
using namespace std;

class PrintString {
public:
    PrintString(istream &i = cin) : is(i) {}
    string operator()() {
        string str;
        if (!getline(is, str))
            return string("empty");
        return str;
    }
private:
    istream &is;
};

int main() {
    PrintString ps;
    cout << ps() << endl;
}
