#include <string>
#include <cctype>
#include <iostream>

using std::string;

int main() {
	string s("I'm Hello World! Yeti@gmail.com");
	std::cout << s << std::endl;
	
	string res;
	for (auto c : s) 
		if (!ispunct(c))
			res += c;
	std::cout << res << std::endl;
	return 0;
}
