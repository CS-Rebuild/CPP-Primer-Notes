#include <iostream>
#include <string>
using namespace std;

int main() {
    int grade;
    cin >> grade;
    string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
    cout << finalgrade << endl;;
    //right
    finalgrade = (grade > 90) ? "high pass" : ((grade < 60) ? "fail" : "pass");
    cout << finalgrade << endl;
    //left
    finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
    cout << finalgrade << endl;
    

    return 0;
}
