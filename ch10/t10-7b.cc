#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> vec;
    vec.reserve(10);
    cout << vec.size() << " " << vec.capacity() << endl;
    //! fill_n(vec.begin(), 10, 0);
    fill_n(back_inserter(vec), 10, 0);
    for (auto e : vec)
        cout << e << " ";
    cout << endl;

    return 0;
}
