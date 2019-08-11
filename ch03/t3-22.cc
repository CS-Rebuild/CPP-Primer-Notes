#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::string;
using std::vector;

int main() {
    vector<string> text;
    string line;
    while (getline(std::cin, line)) {
        text.push_back(line);
    }     

    for (auto &line : text) {
        for (auto &c : line) {
            if (std::isalpha(c) && std::islower(c))
                c = toupper(c);
        }
        std::cout << line << std::endl;
    }
}
