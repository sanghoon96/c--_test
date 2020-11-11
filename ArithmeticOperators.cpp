#include <iostream>

using namespace std;

int main() {
int first = 21, second = 10, result ;
result = first % second;
cout << "first % second of result is : " << result << endl ;
// 1
result = first++;
// result = first; first = first + 1
cout << "first++ of result is : " << result << endl ;
// 21
result = first--;
// result = first; first = first - 1
cout << "first-- of result is : " << result << endl ;
// 22
result = ++first;
// result = 1 + first;
cout << "++first of result is : " << result << endl ;
// 22
first = 21;
result -= first;
// result = result - first
cout << " -= Operator, Value of result : " <<result<< endl ;
// 1
result *= first;
// result = result * first
cout << " *= Operator, Value of result : " <<result<< endl ;
// 21
result /= first;
// result = result / first
cout << " /= Operator, Value of result : " <<result<< endl ;
// 1
return 0;
}