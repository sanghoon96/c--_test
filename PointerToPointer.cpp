#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 4;
int main()
{
    char *ptr_names[MAX] = {"Zara", "Hina Ali", "Ali", "Sara Ali"};
    cout << "Pointer address : " << &ptr_names[0] << " / " << &(*ptr_names) << endl;
    // Pointer address : 0x7fff544f09a0 / 0x7fff544f09a0
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of [" << i << "] = " << ptr_names[i] << " / " << *(ptr_names + i) << ", ";
        cout << "address : " << &ptr_names[i] << " / " << (ptr_names + i) << ", ";
        // Value of [0] = Zara / Zara, address : 0x7fff544f09a0 / 0x7fff544f09a0, size : 8 /...
    }
    char **ptr_ptrs = ptr_names; // char** ptr_ptrs = new char[4][255];
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of " << i << " = " << ptr_ptrs + i << " / " << *(ptr_ptrs + i) << ", ";
        cout << "address : " << &(*(ptr_ptrs + i)) << " / " << &(**(ptr_ptrs + i)) << endl;
        // Value of 3 = 0x7fff5658f9b8 / Sara Ali, address : 0x7fff5658f9b8 / Sara Ali
    }
    return 0;
}