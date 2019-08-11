#include <string>
#include <iostream>

using std::string;

int main() {
	string input;
	string output;

	while (std::cin >> input) {
		output += input + ' ';
		std::cout << output << std::endl;
	}
	std::cout << "end:" << output << std::endl;
	return 0;
}
