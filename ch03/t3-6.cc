#include <string>
#include <cctype>
#include <iostream>
using std::string;

int main() {
	string s("Hello C++14!");
	std::cout << s << std::endl;
	for (auto &c : s)
		if (std::isprint(c))
			c = 'X';
	std::cout << s << std::endl;
	return 0;
}
