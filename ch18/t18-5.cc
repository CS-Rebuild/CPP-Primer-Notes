#include <stdexcept>
#include <iostream>
using namespace std;

int main() {
    exception ex;
    bad_cast bc;
    bad_alloc ba;
    runtime_error re("abc");
    logic_error le("abc");
    overflow_error oe("abc");
    underflow_error ue("abc");
    range_error rae("abc");
    domain_error de("abc");
    invalid_argument ia("abc");
    out_of_range oor("abc");
    length_error lee("abc");

    try {
        throw lee;
    } catch (const exception &e) {
        cerr << e.what() << endl;
        abort();
    }
    return 0;
}
