#include "String.h"
#include <algorithm>
#include <iostream>
using namespace std;

std::pair<char *, char *> String::alloc_n_copy(const char *b, const char *e) {
    auto str = alloc.allocate(e - b);
    return { str, std::uninitialized_copy(b, e, str) };
}

std::pair<char *, char *> String::alloc_n_move(const char *b, const char *e) {
    auto str = alloc.allocate(e - b);
    auto last = uninitialized_copy(make_move_iterator(b), make_move_iterator(e), str);
    return { str, last };
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

String::String(String &&rhs) noexcept : elements(rhs.elements), end(rhs.end) {
    cout << __PRETTY_FUNCTION__ << endl;
    rhs.elements = rhs.elements = nullptr;
}

String& String::operator= (String &&rhs) noexcept {
    if (this != &rhs) {
        free();
        elements = rhs.elements;
        end = rhs.end;
        rhs.elements = rhs.end = nullptr;
    }
    return *this;
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

bool operator==(const String &lhs, const String &rhs) {
    return lhs.size() == rhs.size() && std::equal(lhs.elements, lhs.end, rhs.elements);
}

bool operator!=(const String &lhs, const String &rhs) {
    return !(lhs == rhs);
}


bool operator<(const String &lhs, const String &rhs) {
    return std::lexicographical_compare(lhs.elements, lhs.end, rhs.elements, rhs.end);
}


bool operator>(const String &lhs, const String &rhs) {
    return rhs < lhs;
}

bool operator<=(const String &lhs, const String &rhs) {
    return !(rhs < lhs);
}

bool operator>=(const String &lhs, const String &rhs) {
    return !(lhs < rhs);
}

