#include <iostream>
using namespace std;

int main()
{
    int array_number[10]; // array_number is an array of 10 integers
    auto count = 0;
    for (int i = 0; i < 11; i++)
    {
        count += 5;
        array_number[i] = i + count; // set element
    }
    cout << "\tElement"
         << "\t"
         << "Value" << endl;
    for (int j = 0; j < 10; j++)
    {                                                         // Try 알아가기 → Need Demo
        cout << "\t" << j << "\t" << array_number[j] << endl; // print element
    }
    return 0;
}