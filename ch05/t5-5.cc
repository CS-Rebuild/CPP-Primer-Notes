#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade = 0;
    
    cin >> grade;
    if (grade > 100) {
        grade = 100;
    }

    if (grade < 0) {
        grade = 0;
    }

    if (grade < 60) {
        lettergrade = scores[0];
    } else {
        lettergrade = scores[(grade - 50) / 10];
    }
    cout << lettergrade << endl;
    

    return 0;
}
