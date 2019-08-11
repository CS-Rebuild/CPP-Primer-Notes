#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::string;

int main() {
	vector<string> ivec;
	string s;
	while (std::cin >> s) {
		ivec.push_back(s);
	}

	for (auto v : ivec)
		std::cout << v << std::endl;

	return 0;
}
