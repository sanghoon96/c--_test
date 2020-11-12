#include <iostream>
#include "under/FunctionOther.cpp"

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

int funcOutside();                                // possible remove keyword 'extern'
int i = 5;
int main2(){                                             //function call
    int i = funcOutside();
    cout << "return value : " << i << endl;
    cout << "Scope resolution operator : " << ::i << endl;
    return 0;
}