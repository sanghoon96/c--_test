#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int row, column;
    char char_row = '~', char_column = '!';
    cout << "Enter Row and Column: ";
    cin >> row >> column;
    cout << "Display Row and Column" << char_row << ", " << char_column << endl;
    char **map = new char *[row]; // Dynamic Allocation
    for (int i = 0; i < row; i++)
        map[i] = new char[column];
    
    // 처음 맵의 값을 정해준다.
    for (int i = 0; i < row; i++){ // output each array element's value
        for (int j = 0; j < column; j++)
        {
            map[i][j] = char_row;
        }
    } // end for
    map[0][0] = '@';
    // display
    for (int i = 0; i < row; i++){ // output each array element's value
        for (int j = 0; j < column; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }
    delete[] map;
    return 0;
}