#include <iostream>

using namespace std;

int function();
int main(){
    function();
    return 0;
}

int function(){
    int first = 10;
    while(first < 20) {
        cout << "value of first : " << first << endl;
        ++first;
    }
    return 0;
}