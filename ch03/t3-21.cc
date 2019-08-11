#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;

void print_out(vector<int> ivec) {
    for (auto it = ivec.cbegin(); it != ivec.cend(); ++it) {
        std::cout << *it << (it != ivec.cend() ? ' ' : ('\n'));
    }
    std::cout << std::endl;
}

void print_out(vector<string> svec) {
    for (auto it = svec.cbegin(); it != svec.cend(); ++it) {
        std::cout << *it << (it != svec.cend() ? ' ' : ('\n'));
    }
    std::cout << std::endl;
}

int main() {
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	std::cout << "v1.size(): " << v1.size() << std::endl;
	std::cout << "v2.size(): " << v2.size() << std::endl;
	std::cout << "v3.size(): " << v3.size() << std::endl;
	std::cout << "v4.size(): " << v4.size() << std::endl;
	std::cout << "v5.size(): " << v5.size() << std::endl;
	std::cout << "v6.size(): " << v6.size() << std::endl;
	std::cout << "v7.size(): " << v7.size() << std::endl;

        print_out(v1);
        print_out(v2);
        print_out(v3);
        print_out(v4);
        print_out(v5);
        print_out(v6);
        print_out(v7);


	return 0;
}
