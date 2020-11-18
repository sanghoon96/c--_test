#include <iostream>
#include <curses.h>
#include <string>
using namespace std;

int main()
{
    WINDOW *w;
    w = initscr();
    using namespace std;                        // start main
    int max_y = LINES - 1, max_x = COLS - COLS; // define in curses.h
    printw("Start Hello Ncurse!");              // start main
    move(3, 4);
    addch('3');
    mvaddch(5, 4, '5');
    string str_var = "max_y,max_x:" + to_string(int(LINES)) + ", " + to_string(int(COLS));
    mvaddstr(6, 4, str_var.c_str());
    mvprintw(max_y / 2, COLS / 2, "Middle Hello Ncurse!");
    mvaddch(max_y - 1, COLS - 1, 'E');
    getch(); // end main
}