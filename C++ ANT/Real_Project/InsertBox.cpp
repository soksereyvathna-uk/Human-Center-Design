#include<iostream>
#include"antheaderplusplus.h"
#include<conio.h>
using namespace std;
int j=1;
	void EPN(const string &str) 
    {
	    for(int i = 0;i<str.length();i++)
	    {
	    	if(j==14)
	    	{
	    		j = 1;
			}
	      foreColor(j);
	      cout << str[i];delay(50);
	      j++;
	    }
    }
void FullScreen(){
  HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFOEX csbi;
    csbi.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
    GetConsoleScreenBufferInfoEx(hOut, &csbi);
    csbi.dwSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    csbi.dwSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    csbi.dwMaximumWindowSize.X = csbi.dwSize.X;
    csbi.dwMaximumWindowSize.Y = csbi.dwSize.Y;
    SetConsoleScreenBufferInfoEx(hOut, &csbi);
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_MAXIMIZE);
}
int main(){
    FullScreen();
    DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48,5,39,25,3);delay(100);//big box middle
    drawBoxSingleLineWithBG(16+48,5,2,1,4);delay(100);// very small red box left  above
    drawBoxSingleLineWithBG(61+48,5,2,1,4);delay(100);// very small red box right above
    drawBoxSingleLineWithBG(16+48,29,2,1,4);delay(100);// very small red box left below
    drawBoxSingleLineWithBG(61+48,29,2,1,4);delay(100);// very small red box right below
    drawBoxSingleLineWithBG(12+48,5,2,10,6);delay(100);// yellow above left
    drawBoxSingleLineWithBG(65+48,5,2,10,6);delay(100);// yellow above right
    // real
    drawBoxSingleLineWithBG(12+48,20,2,10,6);delay(100);// yelllow below left
    drawBoxSingleLineWithBG(65+48,20,2,10,6);delay(100);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(100);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(100);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(100);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(100);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(100);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(100);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(100);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(100);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(100);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit
    DrawRectangle(39+48,36,1,2,3);// box style middle; 
    HLine(17+48,6,1,4,'\3');delay(100);
    HLine(17+48,30,1,4,'\4');delay(100);
    HLine(61+48,6,1,4,'\4');delay(100);
    HLine(61+48,30,1,4,'\3');delay(100);
    
    

   // caption
    gotoxy(54+20,3);EPN("INSERT FOOD & DRINK BELOW");
    foreColor(4);cout << " \3";    
    
    gotoxy(22+51,15-2);cout << "Food(f) and Drink(d): ";
    gotoxy(22+51,18-2);cout << "Barcode: ";
    gotoxy(22+51,21-2);cout << "Name food or drink: ";
    gotoxy(22+51,24-2);cout << "Price: ";

    gotoxy(64+13,34);foreColor(0);cout << "PRESS ENRER FOR ORDER!!!";
											 

    






   getch();
   return 0;
}