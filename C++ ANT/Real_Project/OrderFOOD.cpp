#include<iostream>
#include"antheaderplusplus.h"
#include<conio.h>
using namespace std;
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
    DrawRectangle(30+13-25,1,90,2,3);
    drawBoxSingleLineWithBG(20+48-33,5,55,25,3);delay(100);//big box middle
   	 	//drawBoxSingleLineWithBG(16+48-25,5,2,1,4);delay(100);// very small red box left  above
    	//drawBoxSingleLineWithBG(61+48-25,5,2,1,4);delay(100);// very small red box right above
    	//drawBoxSingleLineWithBG(16+48-25,29,2,1,4);delay(100);// very small red box left below
    	//drawBoxSingleLineWithBG(61+48-25,29,2,1,4);delay(100);// very small red box right below
//    drawBoxSingleLineWithBG(12+48-25,5,2,10,6);delay(100);// yellow above left
//    drawBoxSingleLineWithBG(65+48-25,5,2,10,6);delay(100);// yellow above right
    // real
//    drawBoxSingleLineWithBG(12+48-25,20,2,10,6);delay(100);// yelllow below left
//    drawBoxSingleLineWithBG(65+48-25,20,2,10,6);delay(100);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+48-25,35,2,7,6);delay(100);// yelllow below left
    drawBoxSingleLineWithBG(65+48-25,35,2,7,6);delay(100);// yellow below right
    DrawRectangle(8+48-25,6,2,35,5);delay(100);// purple left side
    DrawRectangle(69+48-25,6,2,35,5);delay(100);// purple right side
    DrawRectangle(5+48-25,7,2,33,9);delay(100);// blue left side
    DrawRectangle(72+48-25,7,2,33,9);delay(100);// blue right side
    DrawRectangle(2+48-25,8,2,31,3);delay(100);// similar white left
    DrawRectangle(75+48-25,8,2,31,3);delay(100);// similar white right
    DrawRectangle(13+48-25,32,53,2,3);delay(100);// similar white below
    DrawRectangle(16+48-25,36,6,1,3);// box back;
    DrawRectangle(57+48-25,36,6,1,3);// box exit
    DrawRectangle(39+48-25,36,1,2,3);// box style middle; 
    HLine(17+48-29,6,1,4,'\3');delay(100);
    HLine(17+48-29,30,1,4,'\4');delay(100);
    HLine(61+48-21,6,1,4,'\4');delay(100);
    HLine(61+48-21,30,1,4,'\3');delay(100);
    
    
//    HLine(17+35,6,1,4,'\3');delay(100);
//    HLine(17+35,30,1,4,'\4');delay(100);
//    HLine(61+35,6,1,4,'\4');delay(100);
//    HLine(61+35,30,1,4,'\3');delay(100);
//    VLine(40+35+13-25,6,23,8,'|');delay(300);
    
   // HLine(8+35,56,63,4,'\3');delay(100);
    
    // drink
      gotoxy(17+51-29,6);foreColor(9);cout << ">>> Drink \3 <<<";delay(100);
//    gotoxy(17+51-25,8);foreColor(2);cout << "A.Passion Cream";delay(100);
//    gotoxy(17+51-25,10);foreColor(3);cout << "B.Water \3";delay(100);
//    gotoxy(17+51-25,12);foreColor(4);cout << "C.PRIME";delay(100);
//    gotoxy(17+51-25,14);foreColor(5);cout << "D.MONSTER";delay(100);
//    gotoxy(17+51-25,16);foreColor(6);cout << "E.Coca-Cola";delay(100);
//    gotoxy(17+51-25,18);foreColor(7);cout << "F.Sting";delay(100);
//    gotoxy(17+51-25,20);foreColor(1);cout << "G.Green Tea";delay(100);
      gotoxy(17+51-29,9);foreColor(10);cout << "H.Cappuccino";delay(100);
//    gotoxy(17+51-25,24);foreColor(11);cout << "I.Espresso";delay(100);
//    gotoxy(17+51-25,26);foreColor(12);cout << "J.Latte";delay(100);
//    gotoxy(17+51-25,28);foreColor(13);cout << "K.Coconut";delay(100);
//    gotoxy(17+51-25,30);foreColor(14);cout << "L.Cane Juice";delay(100);    
//    
//    // food
    gotoxy(80+13-25,6);foreColor(9);cout << ">>> Food \2 <<<";delay(100);
    gotoxy(76+13-25,8);foreColor(2);cout << "1.BayCha";delay(100);
    gotoxy(76+13-25,10);foreColor(3);cout << "2.MiCha";delay(100);
    gotoxy(76+13-25,12);foreColor(4);cout << "3.Papaya Salad";delay(100);
    gotoxy(76+13-25,14);foreColor(5);cout << "4.Spicy Noodle";delay(100);
    gotoxy(76+13-25,16);foreColor(6);cout << "5.Popcorn";delay(100);
    gotoxy(76+13-25,18);foreColor(7);cout << "6.Sachko ang";delay(100);
    gotoxy(76+13-25,20);foreColor(1);cout << "7.Burger";delay(100);
    gotoxy(76+13-25,22);foreColor(10);cout << "8.Pizza";delay(100);
    gotoxy(76+13-25,24);foreColor(11);cout << "9.Spaghetti";delay(100);
    gotoxy(76+13-25,26);foreColor(12);cout << "10.Pasta";delay(100);
    gotoxy(76+13-25,28);foreColor(13);cout << "11.French fries";delay(100);
    gotoxy(76+13-25,30);foreColor(14);cout << "12.Saj Pises"; delay(100); 
    
    // caption
    gotoxy(54+12-28,3);foreColor(0);cout << "HERE IS THE SPECIAL MENU IN MY SMALL RESTAURANT ";
    foreColor(4);cout << " \3";    
    // order
    gotoxy(64+13-25,34);foreColor(0);cout << "PRESS ENTER FOR ORDER!!!";
    
    getch();
    DrawRectangle(103,8,45,31,4);delay(400);
    DrawRectangle(104,9,43,29,4);delay(400);
	DrawRectangle(105,10,41,27,4);delay(400);										 

    






   getch();
   return 0;
}