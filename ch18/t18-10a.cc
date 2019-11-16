#include <vector>
#include "Sales_data.h"
using namespace std;

int main() {
    Sales_data item1, item2, sum;
    while (cin >> item1 >> item2) {
        try {
            sum = item1 + item2;
        } catch (const isbn_mismatch &e) {
            cerr << e.what() << ": left isbn(" << e.left
                << ") right isbn(" << e.right << ")" << endl;
        }
    }

    return 0;
}
