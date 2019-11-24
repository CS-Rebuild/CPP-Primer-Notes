#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    vector<string> svec {"abc", "", "efg", "", ""};

    function<bool (const string)> fp = &string::empty;
    int e_cnt1 = count_if(svec.begin(), svec.end(), fp);
    cout << e_cnt1 << endl;

    int e_cnt2 = count_if(svec.begin(), svec.end(), mem_fn(&string::empty));
    cout << e_cnt2 << endl;

    int e_cnt3 = count_if(svec.begin(), svec.end(), bind(&string::empty, std::placeholders::_1));
    cout << e_cnt3 << endl;
}
