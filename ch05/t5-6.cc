#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade = 0;
    
    cin >> grade;
    lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];

    cout << lettergrade << endl;
    

    return 0;
}
