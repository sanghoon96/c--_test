#include <iostream>
#include <curses.h>
#include <string>
#include <cstring>
using namespace std;
using namespace std;
#define PLAYER '*'
#define WALL 'W'
#define OPPONENT 'O'
#define E_TRACE ' '

int is_move_okay(int y, int x)
{
    int campare_ch;
    campare_ch = mvinch(y, x); // 주어진 위치 문자 return
    return !((campare_ch == 'W'));
}

int main(void)
{
    WINDOW *w;
    w = initscr();
    using namespace std; // visible cursor
    keypad(stdscr, TRUE);
    curs_set(0);
    timeout(30);                                                // control game speed
    int y = LINES - 1, x = COLS - COLS, move_x = 0, move_y = 0; // start main
    int ch = 'y';
    while ((ch != 'q') && (ch != 'Q'))
    {
        mvaddch(++move_y, ++move_x, OPPONENT); // auto moving
        mvaddch(y, x, PLAYER);
        mvaddch(10, 5, WALL);
        mvaddch(11, 5, OPPONENT);
        ch = getch();
        
        switch (ch)
        {
        case KEY_UP:
            if (is_move_okay(y - 1, x))
            {
                y = y - 1;
            };
            break;
        case KEY_DOWN:
            if (is_move_okay(y + 1, x))
            {
                y = y + 1;
            };
            break;
        case KEY_LEFT:
            if (is_move_okay(y, x - 1))
            {
                x = x - 1;
            };
            break;
        case KEY_RIGHT:
            if (is_move_okay(y, x + 1))
            {
                x = x + 1;
            };
            break;
        }
    } // end main
}