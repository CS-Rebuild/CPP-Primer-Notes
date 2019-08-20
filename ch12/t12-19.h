#ifndef _T12_19_H
#define _T12_19_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

class StrBlobPtr;

class StrBlob {
public:
    typedef vector<string>::size_type size_type;
    StrBlob() : data(make_shared<vector<string>>()) { }
    StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) { }
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const string &t) { 
        //cout << __PRETTY_FUNCTION__ << endl;
        data->push_back(t); 
    }
    void push_back(const string &t) const { 
        //cout << __PRETTY_FUNCTION__ << endl;
        data->push_back(t); 
    }
    void pop_back();
    void pop_back() const;
    
    string &front();
    string &back();
    const string &front () const;
    const string &back () const;
    StrBlobPtr begin();
    StrBlobPtr end();
private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
    friend class StrBlobPtr;
};

void StrBlob::check(size_type i, const string &msg) const {
    if (i >= data->size()) {
        throw out_of_range(msg);
    }
}

string& StrBlob::front() {
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back() {
    check(0, "back on empty StrBlob");
    return data->back();
}

const string& StrBlob::front() const {
    check(0, "front on empty StrBlob");
    return data->front();
}

const string& StrBlob::back() const {
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

void StrBlob::pop_back() const {
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
    string &deref() const;
    StrBlobPtr &incr();
    bool operator!=(const StrBlobPtr &sb) { return sb.curr != curr; }

private:
    shared_ptr<vector<string>> check(size_t, const string &) const;
    weak_ptr<vector<string>> wptr;
    size_t curr;
};

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const {
    auto ret = wptr.lock();
    if (!ret)
        throw runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw out_of_range(msg);
    return ret;
}

string &StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr &StrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}


StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end() { 
    auto ret = StrBlobPtr(*this, data->size()); 
    return ret;
}
#endif
