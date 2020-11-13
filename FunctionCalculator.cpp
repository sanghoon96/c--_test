#include <iostream>
// #include "under/FunctionCalculatorAdd.cpp"
// #include "under/FunctionCalculatorSub.cpp"
// #include "under/FunctionCalculatorMul.cpp"
// #include "under/FunctionCalculatorDivi.cpp"
// #include "under/FunctionCalculatorMod.cpp"

#include "under/FunctionCalculatorOthers.hpp"
using namespace std;

int add(int first, int second);
int sub(int first, int second);
int mul(int first, int second);
int divi(int first, int second);
int mod(int first, int second);
int Press();
int main()
{
    int first, second;
    cout << "Input first : ";
    cin >> first;
    cout << "Input second : ";
    cin >> second;
    cout << "--------------------------------" << endl;
    cout << " + Addition Result : " << add(first, second) << endl;
    cout << " + Subtraction Result : " << sub(first, second) << endl;
    cout << " + Multiplication Result : " << mul(first, second) << endl;
    cout << " + Division Result : " << divi(first, second) << endl;
    cout << " + Modulo Result : " << mod(first, second) << endl;
    cout << "--------------------------------" << endl;
    Press();
    return 0;
}