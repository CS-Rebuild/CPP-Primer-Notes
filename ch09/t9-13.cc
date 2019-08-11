#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> lst{1,2,3,4,5,6};
    /*
    t9-13.cc:9:29: error: no matching function for call to ‘std::vector<double>::vector(std::__cxx11::list<int>&)’
     vector<double> dvec1(lst);
                             ^
    */
    //! vector<double> dvec1(lst);
    vector<double> dvec2(lst.cbegin(), lst.cend());
    /*
    t9-13.cc:15:28: error: conversion from ‘std::__cxx11::list<int>’ to non-scalar type 
std::vector<double>’ requested
     vector<double> dvec3 = lst;
                            ^~~
    */
    
    //! vector<double> dvec3 = lst;

    vector<int> ivec{1,2,3,4,5,6};
    /*
    t9-13.cc:25:31: error: no matching function for call to ‘std::vector<double>::vector(std::vector<int>&)’
     vector<double> dvec11(ivec);
                               ^
    */
    //! vector<double> dvec11(ivec);
    vector<double> devc12(ivec.cbegin(), ivec.cend());
    
    /*
    t9-13.cc:32:29: error: conversion from ‘std::vector<int>’ to non-scalar type ‘std::vector<double>’ requested
     vector<double> devc13 = ivec;
                             ^~~~
    */
    //! vector<double> devc13 = ivec;
}
