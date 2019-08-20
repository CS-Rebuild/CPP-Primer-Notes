#include <iostream>
#include <memory>
using namespace std;

int main() {
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    typedef unique_ptr<int> IntP;
    { 
    /*
    compiling error:
    t12-17.cc:9:15: error: no matching function for call to ‘std::unique_ptr<int>::unique_ptr(int&)’
     IntP p0(ix);
               ^
    */    
    //! IntP p0(ix);
    
    /*
    runing error:
    Segmentation fault (core dumped)
    */
    //! IntP p1(pi);
    /*
    compile passed; but dangling pointer
    */
    IntP p2(pi2);
    /*
    running error:
    munmap_chunk(): invalid pointer
    Aborted (core dumped)
    */
    //! IntP p3(&ix);
    // Correct 
    IntP p4(new int(2048));
    /*
    double release     
    */
    IntP p5(p2.get());
    }
    cout << *pi2 << endl; // freed by p2;
    return 0;
}
