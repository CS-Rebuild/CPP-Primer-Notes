#include <iostream>
using namespace std;

int main() {
    int i; double d; const string *ps; char *pc; void *pv; int *pi;
    pv = (void*)ps; 
    i = int(*pc);   
    pc = (char *)pi;
    pv = &d;        
    pc = (char*)pv; 
    
    pv = static_cast<void *>(const_cast<string *>(ps));
    i = static_cast<int>(*pc);
    pc = reinterpret_cast<char *>(pi);
    pv = static_cast<void *>(&d);
    pc = static_cast<char *>(pv);    

    return 0;
}
