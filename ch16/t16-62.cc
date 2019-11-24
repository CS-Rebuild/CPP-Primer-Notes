#include <unordered_set>
#include <vector>
#include "t16-62.h"
using namespace std;

int main() {
    unordered_multiset<Sales_data> SDset;

    vector<Sales_data> books = {{"0-201-78345-1", 3, 20.00}, {"0-201-78345-9", 3, 20.00}, {"0-201-78345-2", 3, 20.00}, {"0-201-78345-0", 3, 20.00}};
    for (auto e : books) {
        SDset.insert(e);
    }    

    cout << SDset.size() << endl;
    for (auto sd : SDset)
        cout << sd << " hash:" << std::hex << std::hash<Sales_data>()(sd) << endl;
    return 0;
}
