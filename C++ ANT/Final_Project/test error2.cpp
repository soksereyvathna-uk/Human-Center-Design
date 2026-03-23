#include<iostream>
#include"antheaderplusplus.h"
#include<conio.h>
#include"antheaderinput.h"
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
	      cout << str[i];delay(100);
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
int main()
{
	PresentSimple:
    PresentPerfect:
    FullScreen();
    
    
    
    
    
    DrawRectangle(30,1,116,2,3);
    DrawRectangle(13+28,5,95,37,3);delay(30);//big box middle
    drawBoxSingleLineWithBG(12+25,5,2,10,6);delay(30);// yellow above left
    drawBoxSingleLineWithBG(65+46+27,5,2,10,6);delay(30);// yellow above right
    // real
    drawBoxSingleLineWithBG(12+25,19,2,9,6);delay(30);// yelllow below left
    drawBoxSingleLineWithBG(65+46+27,19,2,9,6);delay(30);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+25,32,2,10,6);delay(30);// yelllow below left
    drawBoxSingleLineWithBG(65+46+27,32,2,10,6);delay(30);// yellow below right
    DrawRectangle(8+25,6,2,35,5);delay(30);// purple left side
    DrawRectangle(69+46+27,6,2,35,5);delay(30);// purple right side
    DrawRectangle(5+25,7,2,33,9);delay(30);// blue left side
    DrawRectangle(72+46+27,7,2,33,9);delay(30);// blue right side
    DrawRectangle(2+25,8,2,31,3);delay(30);// similar white left
    DrawRectangle(75+46+27,8,2,31,3);delay(30);// similar white right
    // good luck
    gotoxy(13,5-4);foreColor(3);cout  << " $$$$$$\\  ";delay(30);
    gotoxy(13,6-4);foreColor(3);cout  << "$$  __$$\\ ";delay(30);
    gotoxy(13,7-4);foreColor(3);cout  << "$$ /  \\__|";delay(30);
    gotoxy(13,8-4);foreColor(3);cout  << "$$ |$$$$\\ ";delay(30);
    gotoxy(13,9-4);foreColor(3);cout  << "$$ |\\_$$ |";delay(30);
    gotoxy(13,10-4);foreColor(3);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,11-4);foreColor(3);cout << "\\$$$$$$  |";delay(30);
    gotoxy(13,12-4);foreColor(3);cout << " \\______/ ";delay(30);
    gotoxy(13,17-4);foreColor(4);cout << " $$$$$$\\  ";delay(30);
    gotoxy(13,18-4);foreColor(4);cout << "$$  __$$\\ ";delay(30);
    gotoxy(13,19-4);foreColor(4);cout << "$$ /  $$ |";delay(30);
    gotoxy(13,20-4);foreColor(4);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,21-4);foreColor(4);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,22-4);foreColor(4);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,23-4);foreColor(4);cout << " $$$$$$  |";delay(30);
    gotoxy(13,24-4);foreColor(4);cout << " \\______/ ";delay(30);
    gotoxy(13,28-4);foreColor(5);cout << " $$$$$$\\  ";delay(30);
    gotoxy(13,29-4);foreColor(5);cout << "$$  __$$\\ ";delay(30);
    gotoxy(13,30-4);foreColor(5);cout << "$$ /  $$ |";delay(30);
    gotoxy(13,31-4);foreColor(5);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,32-4);foreColor(5);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,33-4);foreColor(5);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,34-4);foreColor(5);cout << " $$$$$$  |";delay(30);
    gotoxy(13,35-4);foreColor(5);cout << " \\______/ ";delay(30);
    gotoxy(13,40-4);foreColor(6);cout << "$$$$$$$\\  ";delay(30);
    gotoxy(13,41-4);foreColor(6);cout << "$$  __$$\\ ";delay(30);
    gotoxy(13,42-4);foreColor(6);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,43-4);foreColor(6);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,44-4);foreColor(6);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,45-4);foreColor(6);cout << "$$ |  $$ |";delay(30);
    gotoxy(13,46-4);foreColor(6);cout << "$$$$$$$  |";delay(30);
    gotoxy(13,47-4);foreColor(6);cout << "\\_______/ ";delay(30);
    gotoxy(129+24,5-4);foreColor (3);cout << " /$$      ";delay(30);
    gotoxy(129+24,6-4);foreColor (3);cout << "| $$      ";delay(30);
    gotoxy(129+24,7-4);foreColor (3);cout << "| $$      ";delay(30);
    gotoxy(129+24,8-4);foreColor (3);cout << "| $$      ";delay(30);
    gotoxy(129+24,9-4);foreColor (3);cout << "| $$      ";delay(30);
    gotoxy(129+24,10-4);foreColor(3);cout << "| $$      ";delay(30);
    gotoxy(129+24,11-4);foreColor(3);cout << "| $$$$$$$$";delay(30);
    gotoxy(129+24,12-4);foreColor(3);cout << "|________/";delay(30);
    gotoxy(129+24,17-4);foreColor(4);cout << " /$$   /$$";delay(30);
    gotoxy(129+24,18-4);foreColor(4);cout << "| $$  | $$";delay(30);
    gotoxy(129+24,19-4);foreColor(4);cout << "| $$  | $$";delay(30);
    gotoxy(129+24,20-4);foreColor(4);cout << "| $$  | $$";delay(30);
    gotoxy(129+24,21-4);foreColor(4);cout << "| $$  | $$";delay(30);
    gotoxy(129+24,22-4);foreColor(4);cout << "| $$  | $$";delay(30);
    gotoxy(129+24,23-4);foreColor(4);cout << "|  $$$$$$/";delay(30);
    gotoxy(129+24,24-4);foreColor(4);cout << " \\______/ ";delay(30);
    gotoxy(129+24,28-4);foreColor(5);cout << "  /$$$$$$ ";delay(30);
    gotoxy(129+24,29-4);foreColor(5);cout << " /$$__  $$";delay(30);
    gotoxy(129+24,30-4);foreColor(5);cout << "| $$  \\__/";delay(30);
    gotoxy(129+24,31-4);foreColor(5);cout << "| $$      ";delay(30);
    gotoxy(129+24,32-4);foreColor(5);cout << "| $$      ";delay(30);
    gotoxy(129+24,33-4);foreColor(5);cout << "| $$    $$";delay(30);
    gotoxy(129+24,34-4);foreColor(5);cout << "|  $$$$$$/";delay(30);
    gotoxy(129+24,35-4);foreColor(5);cout << " \\______/ ";delay(30);
    gotoxy(129+24,40-4);foreColor(6);cout << " /$$   /$$";delay(30);
    gotoxy(129+24,41-4);foreColor(6);cout << "| $$  /$$/";delay(30);
    gotoxy(129+24,42-4);foreColor(6);cout << "| $$ /$$/ ";delay(30);
    gotoxy(129+24,43-4);foreColor(6);cout << "| $$$$$/  ";delay(30);
    gotoxy(129+24,44-4);foreColor(6);cout << "| $$  $$  ";delay(30);
    gotoxy(129+24,45-4);foreColor(6);cout << "| $$\\  $$ ";delay(30);
    gotoxy(129+24,46-4);foreColor(6);cout << "| $$ \\  $$";delay(30);
    gotoxy(129+24,47-4);foreColor(6);cout << "|__/  \\__/";delay(30);
    // title
    gotoxy(68+16,6-3);EPN("PAST SIMPLE");
	gotoxy(63,6);foreColor(4);cout << "Please read the instructions before you start.";
	gotoxy(45,7);foreColor(3);cout << "1. Please be careful. If you make a mistake in any exercises, you must redo all of them.";  
	gotoxy(44,8);foreColor(3);cout << "2. The exercise will turn green if correct, or red if incorrect. Press Enter to try again.";   
	gotoxy(58,9);foreColor(3);cout << "3. After finishing, you will get a coupon for your order!";
	
	
	
	string b1, b2, b3, a16;
	
	
	gotoxy(41,19);foreColor(3);cout << "1) _________________________ (you / eat lunch yet)?"; gotoxy(41+3,19);foreColor(3); getline(cin, b1);fflush(stdin);cin.clear();
	if(b1== "Have you eaten lunch yet?")
	{
		gotoxy(41,19);foreColor(2);cout << "1)						   (you / eat lunch yet)?"; gotoxy(41+3,19);foreColor(2);cout << b1;
		gotoxy(41,41);foreColor(3);cout << "16) I ______ (cook) steak last night."; gotoxy(47,41);foreColor(3);inputLetter(a16);fflush(stdin);cin.clear();
																if(a16=="cooked")
																{
																	gotoxy(41,41);foreColor(2);cout << "16) I        (cook) steak last night."; gotoxy(47,41);foreColor(2);cout << a16;
																}
																else
																{
																	gotoxy(41,41);foreColor(2);cout << "16) I        (cook) steak last night."; gotoxy(47,41);foreColor(2);cout << a16;
																	getch();
																	system("cls");
																	goto PresentSimple;	
																}
	}
	else
	{
		gotoxy(41,19);foreColor(4);cout << "1)						   (you / eat lunch yet)?"; gotoxy(41+3,19);foreColor(4);cout << b1;
		getch();
		system("cls");
		goto PresentPerfect;
	}
	
	
	
	
	
	
	
	
	    
    
    getch();
    return 0;
    
}

