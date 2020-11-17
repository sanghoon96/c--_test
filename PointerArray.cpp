#include <iostream>
#include <cstring>
using namespace std;

#define MAX 3

int main()
{
    int var[MAX] = {10, 100, 200}, *ptr_first = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Array var[" << i << "] = " << var[i] << ", address : " << &var[i] << endl;
        cout << "Pointer var[" << i << "] = " << *ptr_first << ", addr : " << ptr_first << endl;
        ptr_first++; // point to the next location
        // Array var[0] = 10, address : 0x7fff5bc979cc
        // Pointer var[0] = 10, addr : 0x7fff5bc979cc
    }
    int *ptr_second = &var[MAX - 1];
    for (int i = MAX - 1; i >= 0; i--)
    {
        cout << "Pointer of var[" << i << "] = " << *ptr_first << ", addr : " << ptr_first << endl;
        ptr_second--;
        // Pointer of var[2] = 1547669, address : 0x7fff5bc979d8
        // Pointer of var[1] = 1547669, address : 0x7fff5bc979d8
        // Pointer of var[0] = 1547669, address : 0x7fff5bc979d8
    }
    return 0;
}