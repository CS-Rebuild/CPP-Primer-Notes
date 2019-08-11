#include <iostream>
using namespace std;

int calc(int, int) {return 0;}
int calc(const int, const int) {return 0;}

/*
t6-39.cc:8:8: error: ambiguating new declaration of ‘double get()’
 double get();
        ^~~
t6-39.cc:7:5: note: old declaration ‘int get()’
 int get();
     ^~~
*/
int get() {return 0;}
double get() {return 0;}

int *reset(int *) {return 0;}
double *reset(double *) {return 0;}

int main() {
    return 0;
}
