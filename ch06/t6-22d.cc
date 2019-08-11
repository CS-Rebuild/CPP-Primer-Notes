#include <iostream>
using namespace std;

int main() {

    int a = 0;
    //int **ppa = &&a;
    //int **ppa = &(&a);
    //int **ppa = &((int *)(&a));
    int *pa = &a;
    int **ppa = &pa;

    return 0;
}
