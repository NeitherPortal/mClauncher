#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include <gtk-4.0/gtk/gtk.h>

#include <ncurses.h>

#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#include <json-c/json.h>

// 其他可能用到的头文件

//tui部分代码
int main(){
    initscr();

    endwin();
    return 0;
}