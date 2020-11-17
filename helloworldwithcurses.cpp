#include <curses.h>

int main() {
initscr();
int max_y, max_x; // start main
// getmaxyx(stdscr,max_y,max_x);
printw("Hello Ncurse!");
refresh(); // end main
getch();
endwin();
return 0;
}