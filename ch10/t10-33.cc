#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);
    ofstream out_odd(argv[2]);
    ofstream out_even(argv[3]);

    istream_iterator<int> in_iter(in), eof;
    ostream_iterator<int> odd_iter(out_odd, " ");
    ostream_iterator<int> even_iter(out_even, "\n");

    while (in_iter != eof) {
        auto e = *in_iter++;
        if (e % 2)
            *odd_iter++ = e;
        else 
            *even_iter++ = e;
    }
    return 0;
}
