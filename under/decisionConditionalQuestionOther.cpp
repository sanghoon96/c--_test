#include <iostream>
using namespace std;

int function()
{
    int x, y = 10, var;
    if (y < 10)
    {
        var = 30;
    }
    else
    {
        var = 40;
    }
    cout << "value of x: " << var << endl; // same way and value

    x = (y < 10) ? 30 : 40; // same way and value
    cout << "value of x: " << x << endl;
}