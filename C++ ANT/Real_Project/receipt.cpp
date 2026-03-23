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
     
     // here is your receipt
     gotoxy(27+18,4-4+3);foreColor(2);cout << "  _____            _     _                           _                 _       ";delay(200);
     gotoxy(27+18,5-4+3);foreColor(3);cout << " |  __ \\          (_)   | |                         | |               (_)      ";delay(200);
     gotoxy(27+18,6-4+3);foreColor(4);cout << " | |__) |___  __ _ _ ___| |_ ___ _ __    ___  _ __  | |     ___   __ _ _ _ __  ";delay(200);
     gotoxy(27+18,7-4+3);foreColor(5);cout << " |  _  // _ \\/ _` | / __| __/ _ \\ '__|  / _ \\| '__| | |    / _ \\ / _` | | '_ \\ ";delay(200);
     gotoxy(27+18,8-4+3);foreColor(6);cout << " | | \\ \\  __/ (_| | \\__ \\ ||  __/ |    | (_) | |    | |___| (_) | (_| | | | | |";delay(200);
     gotoxy(27+18,9-4+3);foreColor(7);cout << " |_|  \\_\\___|\\__, |_|___/\\__\\___|_|     \\___/|_|    |______\\___/ \\__, |_|_| |_|";delay(200);
     gotoxy(27+18,10-4+3);foreColor(9);cout<< "              __/ |                                               __/ |        ";delay(200);
     gotoxy(27+18,11-4+3);foreColor(8);cout<< "             |___/                                               |___/         ";delay(200);
     
    
    
   
    
    
     //drawBoxSingleLineWithBG(20,5,39,25,3);//big box middle
     DrawRectangle(20+34+11,15-8+4,1,20,1);delay(100);// blue left side
     DrawRectangle(60+34+11,15-8+4,1,20,1);delay(100);// blue right side
     DrawRectangle(14+34+11,16-8+4,4,0,2);delay(100);//green left above
     DrawRectangle(63+34+11,16-8+4,4,0,2);delay(100);// green right above
     DrawRectangle(14+34+11,39-8+4,4,0,2);delay(100);// green left below
     DrawRectangle(63+34+11,39-8+4,4,0,2);delay(100);// green right below
     DrawRectangle(12+34+11,16-8+4,0,23,7);delay(100);// white left
     DrawRectangle(12+34+9,16-7+4,0,23,7);
     DrawRectangle(12+34+7,16-6+4,0,23,7);
     DrawRectangle(69+34+11,16-8+4,0,23,7);delay(100);// white right
     DrawRectangle(69+34+13,16-7+4,0,23,7);
     DrawRectangle(69+34+15,16-6+4,0,23,7);
     drawBoxSingleLineWithBG(20+34+11,42-11+4,41,1,7);delay(100);//blue  below
     drawBoxSingleLineWithBG(21+34+11,43-11+4,39,1,9);delay(100);// blue  below
     drawBoxSingleLineWithBG(22+34+11,44-11+4,37,1,2);delay(100);//green below
     
     gotoxy(35+34+11,25);cout << "1. Register";
     gotoxy(36+34+11,28);cout << "2. Login";
     
     
     DrawRectangle(23+34+11,15,35,1,2);
     DrawRectangle(26+34+11,24,29,1,2);
     
     
     DrawRectangle(24+34+11,27,33,1,2);
     int OptionRL;
     gotoxy(32+34+11,16);cout << "Enter Option Here: "; cin >> OptionRL;fflush(stdin);cin.clear();
     
     
     
     
     getch();
     return 0;
}