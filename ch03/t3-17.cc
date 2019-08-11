#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
	string s;
	vector<string> svec;
	while (std::cin >> s) {
		svec.push_back(s);
	}

	for (auto &v : svec) {
		for (auto &c : v) {
			if (isalpha(c) && islower(c)) {
				c = toupper(c);
			}
		}
		std::cout << v << std::endl;
	}
	return 0;
}
