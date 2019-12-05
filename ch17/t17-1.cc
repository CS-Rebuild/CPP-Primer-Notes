#include <tuple>
#include <iostream>
using namespace std;

int main() {
    tuple<int, int, int> i3 {10, 20, 30};
    cout << get<0>(i3) << endl;
    cout << get<1>(i3) << endl;
    cout << get<2>(i3) << endl;
}
