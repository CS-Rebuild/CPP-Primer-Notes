#include <string>
#include <iostream>

using namespace std;

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()):ps(new std::string(s)), i(0), use(new std::size_t(1)) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    HasPtr(const HasPtr &hp):ps(new std::string(*hp.ps)), i(hp.i), use(hp.use) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        ++*use;
    }
/*    HasPtr& operator=(const HasPtr &rhs) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        ++*rhs.use;
        if (--*use == 0) {
            delete ps;
            delete use;
        }
        ps = rhs.ps;
        i = rhs.i;
        use = rhs.use;
        return *this;
    }
*/
    HasPtr& operator=(HasPtr rhs) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        swap(*this, rhs);
        return *this;
    }

    ~HasPtr() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        if (--*use == 0) {
            delete ps;
            delete use;
        }
    }

private:
    std::string *ps;
    int i;
    std::size_t *use;

    friend void swap(HasPtr&, HasPtr&);
};


inline void swap(HasPtr &lhs, HasPtr &rhs) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

