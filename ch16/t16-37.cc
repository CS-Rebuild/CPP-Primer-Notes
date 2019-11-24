#include <iostream>     // std::cout
#include <algorithm>    // std::max

using namespace std;

int main() {
    cout << max(3.16, 4.18) << endl;
    //! cout << max(3.16, 4) << endl;
    cout << max<double>(3.16, 4) << endl;
}
