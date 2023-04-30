#ifndef GAMEUTIL_H
#define GAMEUTIL_H

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "menu.h"

using namespace std;
//store win_border
typedef struct _win_border_struct {
	chtype 	ls, rs, ts, bs, 
	 	tl, tr, bl, br;
}WIN_BORDER;
//store win(the boundary)
typedef struct _WIN_struct {
	int startx, starty;
	int height, width;
	WIN_BORDER border;
}WIN;
//store item(the player)
typedef struct _Item_struct {
	int startx,starty;
	int height,width;
}ITEM;
//store NPC1
typedef struct _NPC1_struct {
	int startx, starty;
	int height,width;
}NPC1;
//store NPC2
typedef struct _NPC2_struct {
	int startx, starty;
	int height, width;
}NPC2;
//store treasure
typedef struct _Treasure_struct {
	int startx, starty;
	int height, width;
}Treas;
//store boss
typedef struct _Boss_struct {
	int startx, starty;
	int height, width;
	int status;
}Boss;
typedef struct _spine_struct {
	int startx, starty;
	bool is_spine;
}Spine;

double getime(void);
void clean_box(WIN *win);

int main2(bool isweap, bool is_flash, bool is_upgrade, int HP, int Coins);

void InitRand(void);

#endif
