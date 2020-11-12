#include <iostream>

using namespace std;

int function();
int main() {
    function();
    return 0;
}

int function(){
    int first = 10;
    for (int first = 10; first < 20; first = first + 1) {
        cout << "value of first : " << first << endl;
        if ( first > 16) {          // with break statement
        break;
        }
    }
    cout << "Final value first : " << first;    //Error
    return 0;
}