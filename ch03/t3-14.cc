#include <vector>
#include <iostream>

using std::vector;

int main() {
	vector<int> ivec;
	int i;
	while (std::cin >> i) {
		ivec.push_back(i);
	}

	for (auto v : ivec)
		std::cout << v << std::endl;

	return 0;
}
