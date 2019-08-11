#include <vector>
#include <iostream>
using namespace std;

void print(const vector<int> &ivec) {
    cout << " ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;
}

int main() {
    vector<int> ivec;
    print(ivec);

    for (vector<int>::size_type ix = 0; ix != 24; ++ix)
        ivec.push_back(ix);
    print(ivec);

    ivec.reserve(50);
    print(ivec);

    while (ivec.size() != ivec.capacity())
        ivec.push_back(0);
    print(ivec);

    ivec.push_back(42);
    print(ivec);

    ivec.shrink_to_fit();
    print(ivec);
    
    ivec.push_back(33);
    print(ivec);
    return 0;
}
