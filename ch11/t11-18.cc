#include <map>
#include <string>

using namespace std;

int main() {
    map<string, size_t> word_count{ {"abc", 1} };
    //auto map_it = word_count.begin();
    map<string, size_t>::iterator map_it = word_count.begin();
}
