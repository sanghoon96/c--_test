#include <iostream>
#include "under/FunctionWithParamOther.cpp"
using namespace std;

int max(int, int); // function declaration

int main(){
    int first, second, result;
    cout << "Input first : ";
    cin >> first;
    cout << "Input second : ";
    cin >> second;
    result = max(first, second);
    cout << "Max value is : " << result << endl;
    cout << "Max value is : " << max(second, first) << endl;
    return 0;
}
