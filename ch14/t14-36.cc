#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PrintString {
public:
    PrintString(istream &i = cin) : is(i) {}
    string operator()() {
        string str;
        if (!getline(is, str))
            return string();
        return str;
    }
private:
    istream &is;
};

int main() {
    PrintString ps;
    vector<string> svec;
    string str;
    while(!(str = ps()).empty()) {
        svec.push_back(str);
    }
    for (auto &s : svec)
        cout << s << endl;
}
