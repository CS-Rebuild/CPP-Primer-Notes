#include <string>
#include <iostream>

using std::string;

int main() {
	string line;
	int cnt = 0;
	while (std::getline(std::cin, line)) {
		cnt++;
		std::cout << cnt << ": " << line << std::endl; 
	}
	return 0;
}
