#ifndef T_13_58_H
#define T_13_58_H

#include <iostream>
#include <vector>
#include <algorithm>

class Foo {
public:
    Foo sorted() &&;
    Foo sorted() const &;
private:
    std::vector<int> data;    
};

Foo Foo::sorted() && {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    std::sort(data.begin(), data.end());
    return *this;
}

Foo Foo::sorted() const & {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
#if defined A
    Foo ret(*this);
    std::sort(ret.data.begin(), ret.data.end());
    return ret;
#elif defined B
    Foo ret(*this);
    return ret.sorted();
#else
    return Foo(*this).sorted();
#endif
}


#endif

