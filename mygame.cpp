#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printBackground();
void printEnemy();
void eraseEnemy();
void moveEnemy();
char getCharAtxy(short int x, short int y);
void printPlayer();
void erasePlayer();
void movePlayerLeft();
void movePlayerRight();


int eX=85, eY=19;
int pX = 4, pY = 4;
main()
{

system ("cls");
printBackground();
printEnemy();
while(true)
   {
    printPlayer();
    if (GetAsyncKeyState(VK_LEFT))
    {
    movePlayerLeft();
    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
    movePlayerRight();
    }
	moveEnemy();
    Sleep(200);
   }
}


void printBackground()
{
    cout<< "************************************************************************************************************************************************************************\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                                                                                                                                                      *\n";
    cout<< "*                                 +                                                                                                                                    *\n";
    cout<< "*                                +++                                                              -------                                                              *\n";
    cout<< "*                  +            +++++                                                            /       \\                                                   +         *\n";
    cout<< "*                 +++          +++++++                                                          /         \\                                                 +++        *\n";
    cout<< "*                +++++           | |                                                           |  O     O  |                                                +++++      *\n";
    cout<< "*                 | |            | |                                                           |           |                                                 | |       *\n";
    cout<< "************************************************************************************************************************************************************************\n";
}


void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void printEnemy()
{
    gotoxy(eX,eY);
    cout<< "  O  \n";  //5
    gotoxy(eX,eY+1);
    cout<< " [ ] \n";
    gotoxy(eX,eY+2);
    cout<< " / \\ \n";  //5  
}


void eraseEnemy()
{
    gotoxy(eX,eY);
    cout<< "     \n";  //5
    gotoxy(eX,eY+1);
    cout<< "     \n";
    gotoxy(eX,eY+2);
    cout<< "     \n";  //5  
}


void moveEnemy()
{
    eraseEnemy();
    eX = eX - 1;
    if(eX == 60)
    {
     eX = 85;
    }
    printEnemy();
}


char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}


void printPlayer()
{
    gotoxy(pX,pY);
    cout<< "        ******************\n";  
    gotoxy(pX, pY+1);
    cout<< "             |||||||      \n";  
    gotoxy(pX, pY+2);
    cout<< "-------   **************  \n";  
    gotoxy(pX, pY+3);
    cout<< "  ||____******************\n";
    gotoxy(pX, pY+4);  
    cout<< "  | ____***| |******| |***\n";
    gotoxy(pX, pY+5);  
    cout<< "        ******************\n"; 
    gotoxy(pX, pY+5); 
    cout<< "          **************  \n";  
}

void erasePlayer()
{
    gotoxy(pX,pY);
    cout<< "                          \n";  
    gotoxy(pX, pY+1);
    cout<< "                          \n";  
    gotoxy(pX, pY+2);
    cout<< "                          \n";  
    gotoxy(pX, pY+3);
    cout<< "                          \n";
    gotoxy(pX, pY+4);  
    cout<< "                          \n";
    gotoxy(pX, pY+5);  
    cout<< "                          \n"; 
    gotoxy(pX, pY+5); 
    cout<< "                          \n"; 
}


void movePlayerLeft() 
{
  if (getCharAtxy(pX - 1, pY) == ' ')
  {
  erasePlayer();
  pX = pX - 1;
  printPlayer();
  } 
}


void movePlayerRight() 
{
  if (getCharAtxy(pX + 26, pY) == ' ')
  {
   erasePlayer();
   pX = pX + 1;
   printPlayer();
  }
}