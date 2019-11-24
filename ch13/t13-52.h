#include <string>
#include <iostream>

using namespace std;

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()):ps(new std::string(s)), i(0) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    HasPtr(const HasPtr &hp):ps(new std::string(*hp.ps)), i(hp.i) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    HasPtr(HasPtr &&p) noexcept : ps(p.ps), i(p.i) { 
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        p.ps = 0;
    }
#if 0
    HasPtr& operator=(const HasPtr &rhs) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        auto newp = new string(*rhs.ps);
        delete ps;
        ps = newp;
        i = rhs.i;
        return *this;
    }
#endif
    HasPtr& operator=(HasPtr rhs) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        swap(*this, rhs);
        return *this;
    }

    ~HasPtr() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        delete ps;
    }
    
    void print() const {
        std::cout << *ps << endl;
    }

private:
    std::string *ps;
    int i;

    friend bool operator<(const HasPtr &lhs, const HasPtr &rhs);
    friend void swap(HasPtr&, HasPtr&);
};


inline void swap(HasPtr &lhs, HasPtr &rhs) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

bool operator<(const HasPtr &lhs, const HasPtr &rhs) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return *lhs.ps < *rhs.ps;
}

