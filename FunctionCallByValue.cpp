#include <iostream>
#include "under/FunctionCallByValueOther.cpp"
using namespace std;

int sum(int first, int second);
int main()
{
    int first, second, third, result;
    cout << "Input first : ";
    cin >> first;
    cout << "Input second : ";
    cin >> second;
    cout << "Input third : ";
    cin >> third;
    result = sum(first, second);
    cout << "Total value is :" << result << endl;
    cout << "Total value is :" << sum(second, third) << endl;
    cout << "Total value is :" << sum(first, third) << endl;
    return 0;
}
