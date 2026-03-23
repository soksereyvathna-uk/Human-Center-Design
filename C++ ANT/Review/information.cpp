#include<iostream>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
#include<conio.h>
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
using namespace std;
int main()
{
	FullScreen();
	int id;
	string dfb,ph;
	char gender;
	char name[20];
	foreColor(7);cout << "\n\n\t\t >>>>> Enter Your Information <<<< ";delay(100);
	foreColor(2);cout << "\n\n\t\t Enter your ID Here: "; cin >> id;fflush(stdin);cin.clear();
	foreColor(3);cout << "\n\n\t\t Enter your Gender Here:"; cin >> gender;fflush(stdin);cin.clear();
	foreColor(4);cout << "\n\n\t\t Enter your Name Here: "; cin.getline(name,20);fflush(stdin);cin.clear();
	foreColor(5);cout << "\n\n\t\t Enter your Date of Birdth Here: "; cin >> dfb;fflush(stdin);cin.clear();
	foreColor(6);cout << "\n\n\t\t Enter your Phone Number Here: "; cin >> ph;fflush(stdin);cin.clear();
	

	foreColor(5);cout << "\n\n\t\t >>>>> Here is your information <<<<<";
	foreColor(8);cout << "\n\n\t\t Here is your ID: "<< id;
	foreColor(9);cout << "\n\n\t\t Here is your Gender: "<< gender;
	foreColor(2);cout << "\n\n\t\t Here is your Name: "<< name;
	foreColor(3);cout << "\n\n\t\t Here is your Date of Birdth: "<< dfb;
	foreColor(4);cout << "\n\n\t\t Here is your Phone Number: "<< ph; 
	
	getch();
	return 0;
	
}
