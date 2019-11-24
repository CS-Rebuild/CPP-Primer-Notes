#include "Blob.h"
#include <vector>
#include <string>
#include <list>
using namespace std;
int main() {
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<long> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<const char *> w = {"now", "is", "the", "time"};
    
    Blob<int> a1(begin(ia), end(ia));
    Blob<int> a2(vi.begin(), vi.end());
    Blob<string> a3(w.begin(), w.end());
}
