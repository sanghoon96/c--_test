#include <iostream>

using namespace std;

int funcInput();
int main()
{
    funcInput();
    return 0;
}

int funcInput()
{
    int length;
    cout << "Input length : ";
    cin >> length;
    cout << length;
}