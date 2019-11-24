#include "StrBlob.h"


int main() {
    StrBlob sb1({"abc", "efg"});
    cout << "sb1: " << sb1.front() << " "<< sb1.count() << endl;

    {
        StrBlob sb2 = sb1, sb3;
        cout << "sb2: " << sb2.front() << " " << sb2.count() << endl;
        sb3 = sb2;
        cout << "sb3: " << sb3.front() << " " << sb3.count() << endl;
        cout << "sb2: " << sb2.front() << " " << sb2.count() << endl;
    }
    cout << "sb1: " << sb1.front() << " "<< sb1.count() << endl;

    StrBlobPtr sbp1(sb1);
    cout << "sbp1: " << sbp1.deref() << " " << sbp1.count() << endl;
    
    {
        StrBlobPtr sbp2 = sbp1, sbp3;
        cout << "sbp2: " << sbp2.deref() << " " << sbp2.count() << endl;
        sbp3 = sbp2;
        cout << "sbp3: " << sbp3.deref() << " " << sbp3.count() << endl;
        cout << "sbp2: " << sbp2.deref() << " " << sbp2.count() << endl;
    }
    cout << "sbp1: " << sbp1.deref() << " " << sbp1.count() << endl;
}
