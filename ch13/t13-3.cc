#include "StrBlob.h"


int main() {
    StrBlob sb1({"abc", "efg"});
    cout << "sb1: " << sb1.front() << endl;
    cout << "sb1: " << sb1.count() << endl;
    StrBlob sb2 = sb1;
    cout << "sb2: " << sb2.front() << endl;
    cout << "sb2: " << sb2.count() << endl;

    StrBlobPtr sbp1(sb1);
    cout << "sbp1: " << sbp1.deref() << endl;
    cout << "sbp1: " << sbp1.count() << endl;
    StrBlobPtr sbp2 = sbp1;
    cout << "sbp2: " << sbp2.deref() << endl;
    cout << "sbp2: " << sbp2.count() << endl;

}
