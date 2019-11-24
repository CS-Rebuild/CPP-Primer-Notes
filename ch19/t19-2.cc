#include <iostream>
#include <cstdlib>
#include "t19-2.h"
using namespace std;
void StrVec::push_back(const string &s) {
    cout << __PRETTY_FUNCTION__ << endl;
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

pair<string *, string *> StrVec::alloc_n_copy(const string *b, const string *e) {
//    auto data = alloc.allocate(e - b);
    size_t size = sizeof(char) * (e - b);
    auto data = static_cast<const string *>(operator new(size));
    return {data, uninitialized_copy(b, e, data)};
}

void StrVec::free() {
    if (elements) {
        for (auto p = first_free; p != elements; )
            alloc.destroy(--p);
       // alloc.deallocate(elements, cap - elements);
        operator delete(elements);
    }
}

StrVec::StrVec(const StrVec &s) {
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::~StrVec() { 
    free(); 
}

StrVec &StrVec::operator= (const StrVec &rhs) {
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

void StrVec::reallocate() {
    auto newcapacity = size() ? 2 * size() : 1;
    alloc_n_move(newcapacity);
}

void StrVec::alloc_n_move(size_t newcapacity) {
    auto newdata = alloc.allocate(newcapacity);
    auto dest = newdata;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++));
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + newcapacity;
}

void StrVec::reserve(size_t new_cap) {
    if (new_cap <= capacity()) return;
    alloc_n_move(new_cap);
}

void StrVec::resize(size_t count) {
    resize(count, std::string());
}

void StrVec::resize(size_t count, const std::string &s) {
    if (count > size()) {
        if (count > capacity()) reserve(count * 2);
        for (size_t i = size(); i != count; ++i)
            alloc.construct(first_free++, s);
    } else if (count < size()) {
        while (first_free != elements + count)
            alloc.destroy(--first_free);
    }
}

void* operator new(size_t size) {
    cout << __PRETTY_FUNCTION__ << endl;
    if (void *mem = malloc(size)) {
        return mem;
    } else {
        throw bad_alloc();
    }
}

void operator delete(void *mem) noexcept {
    cout << __PRETTY_FUNCTION__ << endl;
    cout << "mem: " << mem << endl;
    free(mem);
}

int main() {
    StrVec sv;
    sv.push_back("abc");
}
