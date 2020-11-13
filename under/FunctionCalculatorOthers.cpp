#include <iostream>
using namespace std;

int add(int first, int second)
{
    return first + second;
}

int sub(int first, int second)
{
    return first - second;
}

int mul(int first, int second)
{
    return first * second;
}

int divi(int first, int second)
{
    if (second == 0)
    {
        cout << "Division by zero" << endl;
        return 0;
    }
    return first / second;
}

int mod(int first, int second)
{
    return first % second;
}

int Press(){
    cout << " If you want to exit calculation, Press N " << endl;
    char ch;
    cin >> ch;
    cout << "End the Calculation!" << endl;
}