#include <iostream>

using namespace std;

int funcInputFor();
int funcInputWhile();
int main()
{
    funcInputFor();
    funcInputWhile();
    return 0;
}

int funcInputFor()
{
    int first, second;
    cout << "Input first : ";
    cin >> first;
    cout << "Input second : ";
    cin >> second;
    cout << "first = " << first << endl;
    cout << "second = " << second << endl;
    for (int n = 2; n < 5; n = n + 1) {
        cout << "value of first : " << n << endl;
    }
    return 0;
}

int funcInputWhile()
{
    int first, second;
    cout << "Input first : ";
    cin >> first;
    cout << "Input second : ";
    cin >> second;
    cout << "first = " << first << endl;
    cout << "second = " << second << endl;
    while(first < 5) {
        cout << "value of first : " << first << endl;
        ++first;
    }
    return 0;
}

