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
     gotoxy(27+11,4-4);foreColor(2);cout << "   _    _                 _____      __     __                _____               _       _   ";delay(50);
     gotoxy(27+11,5-4);foreColor(3);cout << "  | |  | |               |_   _|     \\ \\   / /               |  __ \\             (_)     | |  ";delay(50);
     gotoxy(27+11,6-4);foreColor(4);cout << "  | |__| | ___ _ __ ___    | |  ___   \\ \\_/ /__  _   _ _ __  | |__) |___  ___ ___ _ _ __ | |_ ";delay(50);
     gotoxy(27+11,7-4);foreColor(5);cout << "  |  __  |/ _ \\ '__/ _ \\   | | / __|   \\   / _ \\| | | | '__| |  _  // _ \\/ __/ _ \\ | '_ \\| __|";delay(50);
     gotoxy(27+11,8-4);foreColor(6);cout << "  | |  | |  __/ | |  __/  _| |_\\__ \\    | | (_) | |_| | |    | | \\ \\  __/ (_|  __/ | |_) | |_ ";delay(50);
     gotoxy(27+11,9-4);foreColor(7);cout << "  |_|  |_|\\___|_|  \\___| |_____|___/    |_|\\___/ \\__,_|_|    |_|  \\_\\___|\\___\\___|_| .__/ \\__|";delay(50);
     gotoxy(27+11,10-4);foreColor(8);cout << "                                                                                   | |        ";delay(50);
     gotoxy(27+11,11-4);foreColor(9);cout << "                                                                                   |_|        ";delay(50);
     // thank you so much
     gotoxy(31+11,47-10);foreColor(2);cout << " $$$$$$$$\\ $$\\                           $$\\             $$\\     $$\\                         ";delay(50);
     gotoxy(31+11,48-10);foreColor(2);cout << " \\__$$  __|$$ |                          $$ |            \\$$\\   $$  |                        ";delay(50);
     gotoxy(31+11,49-10);foreColor(2);cout << "    $$ |   $$$$$$$\\   $$$$$$\\  $$$$$$$\\  $$ |  $$\\        \\$$\\ $$  /$$$$$$\\  $$\\   $$\\       ";delay(50);
     gotoxy(31+11,50-10);foreColor(2);cout << "    $$ |   $$  __$$\\  \\____$$\\ $$  __$$\\ $$ | $$  |        \\$$$$  /$$  __$$\\ $$ |  $$ |      ";delay(50);
     gotoxy(31+11,51-10);foreColor(2);cout << "    $$ |   $$ |  $$ | $$$$$$$ |$$ |  $$ |$$$$$$  /          \\$$  / $$ /  $$ |$$ |  $$ |      ";delay(50);
     gotoxy(31+11,52-10);foreColor(2);cout << "    $$ |   $$ |  $$ |$$  __$$ |$$ |  $$ |$$  _$$<            $$ |  $$ |  $$ |$$ |  $$ |      ";delay(50);
     gotoxy(31+11,53-10);foreColor(2);cout << "    $$ |   $$ |  $$ |\\$$$$$$$ |$$ |  $$ |$$ | \\$$\\           $$ |  \\$$$$$$  |\\$$$$$$  |      ";delay(50);
     gotoxy(31+11,54-10);foreColor(2);cout << "    \\__|   \\__|  \\__| \\_______|\\__|  \\__|\\__|  \\__|          \\__|   \\______/  \\______/       ";delay(50);
     //drawBoxSingleLineWithBG(20,5,39,25,3);//big box middle
     DrawRectangle(20+34+11,15-8,1,20,1);delay(50);// blue left side
     DrawRectangle(60+34+11,15-8,1,20,1);delay(50);// blue right side
     DrawRectangle(14+34+11,16-8,4,0,2);delay(50);//green left above
     DrawRectangle(63+34+11,16-8,4,0,2);delay(50);// green right above
     DrawRectangle(14+34+11,39-8,4,0,2);delay(50);// green left below
     DrawRectangle(63+34+11,39-8,4,0,2);delay(50);// green right below
     DrawRectangle(12+34+11,16-8,0,23,7);delay(50);// white left
     DrawRectangle(12+34+9,16-7,0,23,7);
     DrawRectangle(12+34+7,16-6,0,23,7);
     DrawRectangle(69+34+11,16-8,0,23,7);delay(50);// white right
     DrawRectangle(69+34+13,16-7,0,23,7);
     DrawRectangle(69+34+15,16-6,0,23,7);
     drawBoxSingleLineWithBG(20+34+11,42-11,41,1,7);delay(50);//blue  below
     drawBoxSingleLineWithBG(21+34+11,43-11,39,1,9);delay(50);// blue  below
     drawBoxSingleLineWithBG(22+34+11,44-11,37,1,2);delay(50);//green below
    DrawRectangle(17+52,7,33,1,0);
    gotoxy(17+52,8);foreColor(0);cout << "BARCODE: ";
    //gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    DrawRectangle(17+52,11,33,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "NAME: ";
    //gotoxy(17+51+8,14);foreColor(0);cout << "NAME OF FOOD OR DRINK";
    DrawRectangle(17+52,15,33,1,0);
    gotoxy(17+52,16);cout << "QUANTITY: ";
    //gotoxy(17+51+16,18);cout << "QUANTITY";
    DrawRectangle(17+52,19,33,1,0);
    gotoxy(17+52,20);cout << "PRICE: ";
    //gotoxy(17+51+17,22);cout << "PRICE";
    DrawRectangle(17+52,23,33,1,0);
    gotoxy(17+52,24);cout << "TOTAL: ";
    //gotoxy(17+51+16,26);cout << "PAYMENT";
    DrawRectangle(17+52,27,33,1,0);
    gotoxy(17+52,28);cout << "PAYMENT: ";


     getch();
     return 0;
}