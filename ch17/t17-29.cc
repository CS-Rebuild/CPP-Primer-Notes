#include <random>
#include <iostream>
using namespace std;

unsigned int uint_rand(unsigned int seed) {
    static default_random_engine e;
    e.seed(seed);
    static uniform_int_distribution<unsigned> u(e.min(), e.max());
    return u(e);
}

int main() {
    for (int i = 0; i != 20; ++i)
        cout << uint_rand(20) << " ";
    cout << endl;
    return 0;
}
