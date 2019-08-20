#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

class StrBlob {
public:
    typedef vector<string>::size_type size_type;
    StrBlob() : data(make_shared<vector<string>>()) { }
    StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) { }
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const string &t) { 
        cout << __PRETTY_FUNCTION__ << endl;
        data->push_back(t); 
    }
    void push_back(const string &t) const { 
        cout << __PRETTY_FUNCTION__ << endl;
        data->push_back(t); 
    }
    void pop_back();
    void pop_back() const;
    
    string &front();
    string &back();
    const string &front () const;
    const string &back () const;
private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
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

int main() {
    StrBlob b1 = {"a", "an", "the"};
    const StrBlob b3 = b1;
    b3.push_back("test_b3");
    cout << b3.size() << " " << b1.size() << endl;
    cout << b3.back() << " " << b1.back() << endl;
    b3.pop_back();
    cout << b3.back() << " " << b1.back() << endl;
    b1.push_back("test_b1");
    cout << b3.back() << " " << b1.back() << endl;
    
    vector<string> v = {"v1", "v2", "v3"};
    vector<string> *p1 = &v;
    cout << p1->back() << endl;
    p1->push_back("v4");
    cout << p1->back() << endl;

    const vector<string> *p2 = &v;
    cout << p2->back() << endl;
    //! p2->push_back("v4");
    cout << p2->back() << endl;

    return 0;
}
