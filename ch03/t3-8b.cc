#include <string>
#include <cctype>
#include <iostream>
using std::string;

int main() {
	string s("Hello C++14!");
	std::cout << s << std::endl;
	decltype(s.size()) i = 0; 
	while (i != s.size()) {
		if (std::isprint(s[i]))
			s[i] = 'X';
		++i;
	}
	std::cout << s << std::endl;
	return 0;
}
