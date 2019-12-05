#include <random>
#include <iostream>
using namespace std;

unsigned int uint_rand(unsigned int seed=0, unsigned int min=0, unsigned int max=100) {
    static default_random_engine e;
    if (seed != 0)
        e.seed(seed);
    static uniform_int_distribution<unsigned> u(min, max);
    return u(e);
}

int main() {
    unsigned int min=1, max=20;
    cout << uint_rand(20, min, max) << endl;
    for (int i = 0; i != 10; ++i)
        cout << uint_rand(0, min, max) << " ";
    cout << endl;
    cout << uint_rand(20, min, max) << endl;
    return 0;
}
