#include <iostream>
#include "t19-24.h"

using namespace std;

int main() {
    Token t;
    cout << "----" << endl;
    Token t2 = std::move(t);
    cout << "----" << endl;
    Token t3;
    cout << "----" << endl;
    t3 = std::move(t2);
    cout << "----" << endl;
    int i = 4;
    t3 = i;
    cout << "----" << endl;
    double d = 5.5;
    t3 = d;
    cout << "----" << endl;
    Sales_data sd;
    t3 = sd;
    cout << "----" << endl;
    char c = 'a';
    t3 = c;
    cout << "----" << endl;
    string s = "abc";
    t3 = s; 
    cout << "----" << endl;
}

