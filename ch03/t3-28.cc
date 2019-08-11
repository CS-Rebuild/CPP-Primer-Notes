#include <string>
#include <iostream>
using std::string;

string sa[10];
int ia[10];

int main() {
    string sa2[10];
    int ia2[10];

    for (int i = 0; i != 10; ++i) {
        std::cout << "sa[" << i << "]=" << sa[i] << std::endl;
        std::cout << "sa2[" << i << "]=" << sa2[i] << std::endl;
        std::cout << "ia[" << i << "]=" << ia[i] << std::endl;
        std::cout << "ia2[" << i << "]=" << ia2[i] << std::endl;
    }

    return 0;
}
