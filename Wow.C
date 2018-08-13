#include <stdio.h>
#include <conio.h>
#include "rizzu\T2GCC.H"
#include "rizzu\GRPHCS.H"
#include <dos.h>
#define HAIR BLACK
#define TORSO RED
#define BELT BLACK
#define LOWER BLUE
#define SHOES BLACK
int getKey();
void doAction();
void draw_up();
void draw_left();
void draw_right();
void draw_down();
void move_up();
void move_left();
void move_right();
void move_down();
int ch,x=10,y=18;
void message () {
	gotoxy(2, 40);
	printf("Press W, S, A and D to move Luke Skywalker.");
}
int main()
{
    setConSize(160,40);
	clrscr();
	textbackground(CYAN);
	draw_down();
	drawBox(1,1,158,37,11,4);
	message();
	while(ch!=79)
	{
		ch=getKey();
		doAction();
	}
	getch();
	return 0;
}
int getKey() //Returns scan code of the key that has been hit
{
	int ch;
    ch = _getch ();
    if (ch == 0 || ch == 224)
    {
        return _getch ();
    }
    else return 0;
}
void doAction()
{
	switch(ch)
	{
		case 72:
			move_up();
			break;
		case 75:
			move_left();
			break;
		case 77:
			move_right();
			break;
		case 80:
			move_down();
			break;
		case 79:
			exit(1);
		default:
			break;
	};
	drawBox(1,1,158,37,11,4);
	// delay(50);
	message();
}
void draw_up()
{
	clrscr();
	gotoxy(x,y-6);
	textcolor(HAIR);
	printf("    __");
	gotoxy(x,y-5);
	textcolor(HAIR);
	printf("   /==\\");
	gotoxy(x,y-4);
	textcolor(HAIR);
	printf("  //==\\\\");
	gotoxy(x,y-3);
	textcolor(TORSO);;
	printf(" /--||--\\");
	gotoxy(x,y-2);
	textcolor(TORSO);;
	printf("//|    |\\\\");
	gotoxy(x,y-1);
	textcolor(TORSO);;
	printf("\\\\|    |//");
	gotoxy(x,y);
	textcolor(TORSO);;
	printf(" \\|    |/");
	gotoxy(x,y+1);
	textcolor(BELT);
	printf("  |====|");
	gotoxy(x,y+2);
	textcolor(LOWER);
	printf("  | || |");
	gotoxy(x,y+3);
	textcolor(LOWER);
	printf("  (_)(_)");
	gotoxy(x,y+4);
	textcolor(LOWER);
	printf("  | || |");
	gotoxy(x,y+5);
	textcolor(LOWER);
	printf("  |_||_|");
	gotoxy(x,y+6);
	textcolor(SHOES);
	printf(" /__][__\\");
}
void draw_left()
{
	clrscr();
	textcolor(HAIR);
	gotoxy(x,y-6);
	printf("    %c%c\\",174,174);
	gotoxy(x,y-5);
	textcolor(HAIR);
	printf("   /oo|\\");
	gotoxy(x,y-4);
	textcolor(HAIR);
	printf("  (_-_|\\\\");
	gotoxy(x,y-3);
	textcolor(TORSO);;
	printf(" /-/|\\--\\");
	gotoxy(x,y-2);
	textcolor(TORSO);;
	printf("//| |  |\\\\");
	gotoxy(x,y-1);
	textcolor(TORSO);;
	printf("\\\\| |  |//");
	gotoxy(x,y);
	textcolor(TORSO);;
	printf(" \\| |  //");
	gotoxy(x,y+1);
	textcolor(BELT);
	printf("  )===(|");
	gotoxy(x,y+2);
	textcolor(LOWER);
	printf("  | || |");
	gotoxy(x,y+3);
	textcolor(LOWER);
	printf("  (_)(_)");
	gotoxy(x,y+4);
	textcolor(LOWER);
	printf("  | || |");
	gotoxy(x,y+5);
	textcolor(LOWER);
	printf("  |_||_|");
	gotoxy(x,y+6);
	textcolor(SHOES);
	printf(" /__][__\\");
}
void draw_right()
{
	clrscr();
	gotoxy(x,y-6);
	textcolor(HAIR);
	printf("   /%c%c",175,175);
	gotoxy(x,y-5);
	textcolor(HAIR);
	printf("  /|oo\\");
	gotoxy(x,y-4);
	textcolor(HAIR);
	printf(" //|_-_)");
	gotoxy(x,y-3);
	textcolor(TORSO);;
	printf(" /--/|\\-\\");
	gotoxy(x,y-2);
	textcolor(TORSO);;
	printf("//|  | |\\\\");
	gotoxy(x,y-1);
	textcolor(TORSO);;
	printf("\\\\|  | |//");
	gotoxy(x,y);
	textcolor(TORSO);;
	printf(" \\\\  | |/");
	gotoxy(x,y+1);
	textcolor(BELT);
	printf("  |)===(");
	gotoxy(x,y+2);
	textcolor(LOWER);
	printf("  | || |");
	gotoxy(x,y+3);
	textcolor(LOWER);
	printf("  (_)(_)");
	gotoxy(x,y+4);
	textcolor(LOWER);
	printf("  | || |");
	gotoxy(x,y+5);
	textcolor(LOWER);
	printf("  |_||_|");
	gotoxy(x,y+6);
	textcolor(SHOES);
	printf(" /__][__\\");
}
void draw_down()
{
	clrscr();
	gotoxy(x,y-6);
	textcolor(HAIR);
	printf("   /=\\");
	gotoxy(x,y-5);
	textcolor(HAIR);
	printf("  /o.o\\");
	gotoxy(x,y-4);
	textcolor(HAIR);
	printf(" /(_-_)\\");
	gotoxy(x,y-3);
	textcolor(TORSO);;
	printf(" /-/|\\-\\");
	gotoxy(x,y-2);
	textcolor(TORSO);;
	printf("//| | |\\\\");
	gotoxy(x,y-1);
	textcolor(TORSO);;
	printf("\\\\| | |//");
	gotoxy(x,y);
	textcolor(TORSO);;
	printf(" \\\\ | //");
	gotoxy(x,y+1);
	textcolor(BELT);
	printf("  |)==(|");
	gotoxy(x,y+2);
	textcolor(LOWER);
	printf("  | || |");
	gotoxy(x,y+3);
	textcolor(LOWER);
	printf("  (_)(_)");
	gotoxy(x,y+4);
	textcolor(LOWER);
	printf("  |_||_|");
	gotoxy(x,y+5);
	textcolor(LOWER);
	printf("  |_||_|");
	gotoxy(x,y+6);
	textcolor(SHOES);
	printf(" /__][__\\");
}
void move_up()
{
	if(y>8)
	{
		y--;
		draw_up();
	}
}
void move_left()
{
	if(x>2)
	{
		x--;
		draw_left();
	}
}
void move_right()
{
	if(x<150)
	{
		x++;
		draw_right();
	}
}
void move_down()
{
	if(y<32)
	{
		y++;
		draw_down();
	}
}
