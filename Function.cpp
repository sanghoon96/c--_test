#include <iostream>
#include "FunctionOther.cpp"

using namespace std;

int funcInside();                                      // function declaration
int main(){
    int i = funcInside();                               // function call
    cout << "return value : " << i << endl;
    return 0;
}
int funcInside(){                                       // function definition
    cout << "int funcInside()" << endl;
    return 8;
}