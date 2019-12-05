#include <bitset>
#include <iostream>
#include <string>
using namespace std;

template<size_t N>
class Quiz {
public:
    Quiz(string s) : bs(s) {}
    size_t size() {
        return bs.size();
    }
    bool answer(size_t pos) {
        return bs[pos];
    }

private:
    bitset<N> bs;
};

int main() {
    Quiz<100> q1("101010101");
    Quiz<10> q2("00101010");
    cout << q1.size() << endl;
    cout << q2.size() << endl;
    cout << q1.answer(0) << " " << q1.answer(1) << endl;
    cout << q2.answer(0) << " " << q2.answer(1) << endl;
}
