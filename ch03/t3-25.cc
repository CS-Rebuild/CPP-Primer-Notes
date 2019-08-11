#include <iostream>
#include <vector>

using std::vector;

int main() {
    vector<int> scores(11, 0);
    int grade;
    while (std::cin >> grade) {
        if (grade <= 100 && grade >=0) {
            ++(*(scores.begin() + grade/10));
        }
    }

    for (auto s : scores) {
        std::cout << s << std::endl;
    }
    return 0;
}
