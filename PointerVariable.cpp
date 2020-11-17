#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int var = 20;     // actual variable declaration.
    int *ptr_first;   // pointer variable
    ptr_first = &var; // store address of var in pointer variable
    cout << "var variable: " << var << ", address : " << &var << endl;
    // var variable: 20, address : 0x7fff5de67998

    cout << "ptr_first variable: " << ptr_first << ", address : " << &ptr_first << endl;
    // ptr_first variable: 0x7fff5de67998, address : 0x7fff5de67990

    /* access the value at the address available in pointer */
    cout << "Value of *ptr_first variable: " << *ptr_first << ", address : " << &(*ptr_first);
    // Value of *ptr_first variable: 20, address : 0x7fff5de67998

    return 0;
}