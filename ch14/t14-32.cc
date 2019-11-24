#include "StrBlob.h"

using namespace std;

class StrBlobPtrPtr {
public:
    StrBlobPtrPtr() = default;
    StrBlobPtrPtr(StrBlobPtr* p):ptr(p) {}

    StrBlobPtr &operator*() {
        return *ptr;
    }

    StrBlobPtr *operator->() {
        return ptr;
    }

private:
    StrBlobPtr *ptr = nullptr;
};

int main() {
    StrBlob sb{ "hello", "world" };
    StrBlobPtr iter = sb.begin();
    StrBlobPtrPtr p(&iter);
    std::cout << p->deref() << std::endl;    
}
