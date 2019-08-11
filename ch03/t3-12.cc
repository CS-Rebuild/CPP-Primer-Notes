#include <vector>
#include <string>

using std::string;
using std::vector;

int main() {
	vector<vector<int>> ivec;
	vector<string> svec1 = ivec;
	vector<string> svec2(10, "null");
	return 0;
}
