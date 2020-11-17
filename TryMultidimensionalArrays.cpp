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

    map[1][1] = ' ';
    map[1][3] = ' ';
    map[2][1] = ' ';
    map[2][3] = ' ';
    map[3][1] = ' ';
    map[3][3] = ' ';
    map[4][1] = ' ';
    map[4][3] = ' ';
    map[5][1] = ' ';
    map[5][3] = ' ';

    map[1][2] = '!';
    map[2][2] = '!';
    map[3][2] = '!';
    map[4][2] = '!';
    map[5][2] = '!';

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