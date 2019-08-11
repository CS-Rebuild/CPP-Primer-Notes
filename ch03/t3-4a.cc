#include <string>
#include <iostream>
using std::string;

int main() {
	string s1, s2;
	std::cout << "Input S1: " << std::endl;
	std::cin >> s1;
	std::cout << "Input S2: " << std::endl;
	std::cin >> s2;

	if (s1 >= s2) {
		std::cout << s1 << std::endl;	
	} else {
		std::cout << s2 << std::endl;
	}
	return 0;
}
