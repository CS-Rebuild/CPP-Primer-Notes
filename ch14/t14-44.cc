#include <iostream>
#include <map>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;

int add(int i, int j) { return i + j; }
auto mod = [](int i, int j) { return i % j; };
struct divide {
    int operator()(int denominator, int divisor) {
        return denominator / divisor;
    }
};

map<string, function<int(int, int)>> binops {
    {"+", add},
    {"-", std::minus<int>()},
    {"/", divide()},
    {"*", [](int i, int j) { return i * j; }},
    {"%", mod}
};

int main() {
    cout << binops["+"](10, 5) << endl;
    cout << binops["-"](10, 5) << endl;
    cout << binops["*"](10, 5) << endl;
    cout << binops["/"](10, 5) << endl;
    cout << binops["%"](10, 5) << endl;
}
