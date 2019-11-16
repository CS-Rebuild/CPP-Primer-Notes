#include <iostream>
#include <string>

class Type {
public:
    //std::string mem1;
    int mem1;
};

template <typename T>
void swap(T v1, T v2) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    using std::swap;
    swap(v1.mem1, v2.mem1);
}

int main() {
    Type t1, t2;
    swap(t1, t2);
}
