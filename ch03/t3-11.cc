#include <string>
#include <iostream>

int main() {
	const std::string s = "Keep Out!";
	for (auto &c : s) {
		std::cout << c << std::endl;
	}

	for (auto &c : s) {
		c = 'X';
	}
	return 0;
}
