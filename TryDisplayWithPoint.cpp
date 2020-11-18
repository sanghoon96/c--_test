#include <iostream>
#include <curses.h>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int row, column;
    char char_row = '~', char_column = '!';

    // 입력 시작
    cout << "Enter Row and Column: ";
    cin >> row >> column;
    cout << "Display Row : ";
    cin >> char_row;
    cout << "Display Column : ";
    cin >> char_column;
    // 입력 끝

    // 행 생성
    char **map = new char *[row]; // Dynamic Allocation
    // 컬럼 생성
    for (int i = 0; i < row; i++)
        map[i] = new char[column];
    
    // 처음 맵의 값을 정해준다.
    
    // 첫 번째 행
    for (int j = 0; j < column; j++)
    {
        map[0][j] = char_row;
    }

    // 중간 행들
    for (int i = 1; i < row - 1 ; i++){ // output each array element's value
        for (int j = 0; j < column; j++)
        {
            if( j == 0)
                map[i][j] = char_row;
            else if( j == column - 1)
                map[i][j] = char_row;
            else if( column / 2 == j)
                map[i][j] = char_column;
            else
                map[i][j] = ' ';            
        }
    } // end for

    // 마지막 행
    for (int i = 0; i < column; i++)
    {
        map[row-1][i] = char_row;
    }

    
    // display
    for (int i = 0; i < row; i++){ // output each array element's value
        for (int j = 0; j < column; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }
    delete[] map;
    

    WINDOW *w;
    w = initscr();
    using namespace std;                        // start main
    int max_y = LINES - 1, max_x = COLS - COLS; // define in curses.h
    // printw("Start Hello Ncurse!");              // start main
    move(3, 4);
    // addch('3');
    // mvaddch(5, 4, '5');
    // string str_var = "max_y,max_x:" + to_string(int(LINES)) + ", " + to_string(int(COLS));
    // mvaddstr(6, 4, str_var.c_str());
    mvprintw(max_y / 2, COLS / 2, "Game Start");
    // mvaddch(max_y - 1, COLS - 1, 'E');
    getch(); // end main
    return 0;
}