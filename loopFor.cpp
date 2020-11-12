#include <iostream>

using namespace std;

int function();
int main() {
    function();
    return 0;
}

int function(){
    int last = 10;
    for (int first = 10; first < 20; first = first + 1) {
        cout << "value of first : " << first << endl;
        if ( first > 16) {          // with break statement
        last = first;
        break;
        }
    }
    cout << "Final value first : " << last << endl;    //Error
    return 0;
}