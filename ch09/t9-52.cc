#include <stack>
#include <iostream>

using namespace std;

void express(const string &s) {
    stack<char> stk;
    int cnt = 0;
    for (const auto &e : s) {
        if (e == '(') {
            ++cnt;
            cout << "push: " << e << endl;
            stk.push(e);
        } else if (e == ')') {
            --cnt;
            char c;
            cout << "meet: " << e << " cnt" << cnt <<  endl;
            if (cnt >= 0) {
                do {
                    c = stk.top();
                    cout << "pop: " << c << endl;
                    stk.pop();
                } while (c != '(');
            }
            
        } else {
            cout << "push: " << e << endl;
            stk.push(e);
        }
    } 

    while(!stk.empty()) {
        cout << "pop: " << stk.top() << endl;
        stk.pop();
    }
}

int main() {
    express("3+4+2-(5*4)+(3-(2+2))");
}
