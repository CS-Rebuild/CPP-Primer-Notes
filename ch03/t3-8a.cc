#include <string>
#include <cctype>
#include <iostream>
using std::string;

int main() {
	string s("Hello C++14!");
	std::cout << s << std::endl;
	for (decltype(s.size()) i = 0; i != s.size(); ++i)
		if (std::isprint(s[i]))
			s[i] = 'X';
	std::cout << s << std::endl;
	return 0;
}
