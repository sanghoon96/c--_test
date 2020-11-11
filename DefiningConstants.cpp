#include <iostream>

using namespace std;

# define LENGTH 10
# define NEWLINE '\n'

int main() {
    const int WIDTH = 5;
    // LENGTH = 20 ;
    // Error - expression must be first modifiable lvalue
    // WIDTH = 10 ;
    // Error - expression must be first modifiable lvalue
    int area;
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}