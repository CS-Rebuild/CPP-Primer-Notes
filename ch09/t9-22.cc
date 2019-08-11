#include <iostream>
#include <vector>

using namespace std;

void insert(std::vector<int>& iv, int some_val)
{
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
    while (iter != mid) {
        if (*iter == some_val) {
            iter = iv.insert(iter, 2 * some_val);
            ++iter;
        }
        ++iter;
        mid = iv.begin() + iv.size() / 2;
    }
}

int main()
{
    std::vector<int> v{ 1, 2, 2, 3, 2, 4, 5, 6, 7, 8 };
    for (auto i : v) 
        cout << i << " ";
    cout << endl;

    insert(v, 2);

    for (auto i : v) 
        cout << i << " ";
    cout << endl;
}
