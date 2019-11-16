#include <unordered_set>
#include <vector>
#include "Sales_data.h"
using namespace std;

int main() {
    vector<Sales_data> books = {{"0-201-78345-1", 3, 20.00}, {"0-201-78345-9", 3, 20.00}, {"0-201-78345-2", 3, 20.00}, {"0-201-78345-0", 3, 20.00}};

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
