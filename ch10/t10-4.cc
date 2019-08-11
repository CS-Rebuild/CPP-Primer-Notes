#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<double> ivec{0,1.5,2,3,4,5,6,7,8,9};
    
    auto sum1 = accumulate(ivec.cbegin(), ivec.cend(), 0.0);  //output: 45.5
    auto sum2 = accumulate(ivec.cbegin(), ivec.cend(), 0); //output: 45
    cout << sum1 << " " << sum2 << endl;

    return 0;
}
