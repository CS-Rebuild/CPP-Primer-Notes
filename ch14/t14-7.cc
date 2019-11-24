#include "t14-7.h"
#include <algorithm>
#include <iostream>
using namespace std;

std::pair<char *, char *> String::alloc_n_copy(const char *b, const char *e) {
    auto str = alloc.allocate(e - b);
    return { str, std::uninitialized_copy(b, e, str) };
}

void String::range_initializer(const char *first, const char *last) {
    auto newstr = alloc_n_copy(first, last);
    elements = newstr.first;
    end = newstr.second;
}

String::String(const char *s) {
    char *st = const_cast<char *>(s);
    while (*st) 
        ++st;
    range_initializer(s, ++st);
    cout << __PRETTY_FUNCTION__ << endl;
}

String::String(const String &rhs) {
    range_initializer(rhs.elements, rhs.end);
    cout << __PRETTY_FUNCTION__ << endl;
}

void String::free() {
    if (elements) {
        for_each(elements, end, [this](char &c) {alloc.destroy(&c); });
        alloc.deallocate(elements, end - elements);
    }
    cout << __PRETTY_FUNCTION__ << endl;
}

String::~String() {
    free();
    cout << __PRETTY_FUNCTION__ << endl;
}

String &String::operator= (const String &rhs) {
    auto newstr = alloc_n_copy(rhs.elements, rhs.end);
    free();
    elements = newstr.first;
    end = newstr.second;
    cout << __PRETTY_FUNCTION__ << endl;
    return *this;
}

std::ostream& operator<<(std::ostream &os, const String &item) {
    os << item.c_str();
    return os;
}

