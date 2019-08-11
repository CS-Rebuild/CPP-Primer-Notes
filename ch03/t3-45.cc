#include <iostream>
using namespace std;

int main() {
    int ia[3][4] = { {1,2,3,4}, {11,12,13,14}, {21,22,23,24}};

    using int_array = int[4];

    //for (const int (&row)[4] : ia) {
    //for (const int_array &row : ia) {
    for (const auto &row : ia) {
        //for (int col : row)
        for (auto col : row) 
            cout << col << " ";
        cout << endl;
    }

    for (size_t i = 0; i != 3; ++i) {
        for (size_t j = 0; j != 4; ++j)
            cout << ia[i][j] << " ";
        cout << endl;
    }

    //for (int (*row)[4] = ia; row != ia + 3; ++row) {
    //for (int_array *row = ia; row != ia + 3; ++row) {
    for (auto row = ia; row != ia + 3; ++row) {
        //for (int *col = *row; col != *row + 4; ++col)
        for (auto col = *row; col != *row + 4; ++col)
            cout << *col << " ";
        cout << endl;
    }
    
    return 0;
}
