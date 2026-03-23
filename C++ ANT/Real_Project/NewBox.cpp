#include<iostream>
#include"antheaderPlusPlus.h"
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
    drawBoxSingleLineWithBG(16+48,6,2,1,4);delay(100);// very small red box left  above
    drawBoxSingleLineWithBG(61+48,6,2,1,4);delay(100);// very small red box right above
    drawBoxSingleLineWithBG(16+48,29,2,1,4);delay(100);// very small red box left below
    drawBoxSingleLineWithBG(61+48,29,2,1,4);delay(100);// very small red box right below
    drawBoxSingleLineWithBG(12+48,7,2,10,6);delay(100);// yellow above left
    drawBoxSingleLineWithBG(65+48,7,2,10,6);delay(100);// yellow above right
    // real
    drawBoxSingleLineWithBG(12+48,20,2,10,6);delay(100);// yelllow below left
    drawBoxSingleLineWithBG(65+48,20,2,10,6);delay(100);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+48,35,2,4,6);delay(100);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,4,6);delay(100);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(100);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(100);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(100);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(100);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(100);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(100);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(100);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit
   
    HLine(17+48,7,1,4,'\3');delay(100);
    HLine(17+48,30,1,4,'\4');delay(100);
    HLine(61+48,7,1,4,'\4');delay(100);
    HLine(61+48,30,1,4,'\3');delay(100);
    
    
 
    DrawRectangle(66+13,36,17,2,1); // blue last middle
    
    
    

    
	 			DrawRectangle(30,1,116,2,3);
			    DrawRectangle(13+25,5,101,37,3);delay(100);//big box middle
			  
			    drawBoxSingleLineWithBG(12+25,5,2,10,6);delay(100);// yellow above left
			    drawBoxSingleLineWithBG(65+46+27,5,2,10,6);delay(100);// yellow above right
			    // real
			    drawBoxSingleLineWithBG(12+25,19,2,9,6);delay(100);// yelllow below left
			    drawBoxSingleLineWithBG(65+46+27,19,2,9,6);delay(100);// yellow below right
			    // fake
			    drawBoxSingleLineWithBG(12+25,32,2,10,6);delay(100);// yelllow below left
			    drawBoxSingleLineWithBG(65+46+27,32,2,10,6);delay(100);// yellow below right
			    DrawRectangle(8+25,6,2,35,5);delay(100);// purple left side
			    DrawRectangle(69+46+27,6,2,35,5);delay(100);// purple right side
			    DrawRectangle(5+25,7,2,33,9);delay(100);// blue left side
			    DrawRectangle(72+46+27,7,2,33,9);delay(100);// blue right side
			    DrawRectangle(2+25,8,2,31,3);delay(100);// similar white left
			    DrawRectangle(75+46+27,8,2,31,3);delay(100);// similar white right
			    
			    
			    
			    // good luck
			    
			    
//			    gotoxy(13,5-4);foreColor(3);cout  << " $$$$$$\\  ";
//			    gotoxy(13,6-4);foreColor(3);cout  << "$$  __$$\\ ";
//			    gotoxy(13,7-4);foreColor(3);cout  << "$$ /  \\__|";
//			    gotoxy(13,8-4);foreColor(3);cout  << "$$ |$$$$\\ ";
//			    gotoxy(13,9-4);foreColor(3);cout  << "$$ |\\_$$ |";
//			    gotoxy(13,10-4);foreColor(3);cout << "$$ |  $$ |";
//			    gotoxy(13,11-4);foreColor(3);cout << "\\$$$$$$  |";
//			    gotoxy(13,12-4);foreColor(3);cout << " \\______/ ";
//			    gotoxy(13,17-4);foreColor(4);cout << " $$$$$$\\  ";
//			    gotoxy(13,18-4);foreColor(4);cout << "$$  __$$\\ ";
//			    gotoxy(13,19-4);foreColor(4);cout << "$$ /  $$ |";
//			    gotoxy(13,20-4);foreColor(4);cout << "$$ |  $$ |";
//			    gotoxy(13,21-4);foreColor(4);cout << "$$ |  $$ |";
//			    gotoxy(13,22-4);foreColor(4);cout << "$$ |  $$ |";
//			    gotoxy(13,23-4);foreColor(4);cout << " $$$$$$  |";
//			    gotoxy(13,24-4);foreColor(4);cout << " \\______/ ";
//			    gotoxy(13,28-4);foreColor(5);cout << " $$$$$$\\  ";
//			    gotoxy(13,29-4);foreColor(5);cout << "$$  __$$\\ ";
//			    gotoxy(13,30-4);foreColor(5);cout << "$$ /  $$ |";
//			    gotoxy(13,31-4);foreColor(5);cout << "$$ |  $$ |";
//			    gotoxy(13,32-4);foreColor(5);cout << "$$ |  $$ |";
//			    gotoxy(13,33-4);foreColor(5);cout << "$$ |  $$ |";
//			    gotoxy(13,34-4);foreColor(5);cout << " $$$$$$  |";
//			    gotoxy(13,35-4);foreColor(5);cout << " \\______/ ";
//			    gotoxy(13,40-4);foreColor(6);cout << "$$$$$$$\\  ";
//			    gotoxy(13,41-4);foreColor(6);cout << "$$  __$$\\ ";
//			    gotoxy(13,42-4);foreColor(6);cout << "$$ |  $$ |";
//			    gotoxy(13,43-4);foreColor(6);cout << "$$ |  $$ |";
//			    gotoxy(13,44-4);foreColor(6);cout << "$$ |  $$ |";
//			    gotoxy(13,45-4);foreColor(6);cout << "$$ |  $$ |";
//			    gotoxy(13,46-4);foreColor(6);cout << "$$$$$$$  |";
//			    gotoxy(13,47-4);foreColor(6);cout << "\\_______/ ";
//			    gotoxy(129+24,5-4);foreColor (3);cout << " /$$      ";
//			    gotoxy(129+24,6-4);foreColor (3);cout << "| $$      ";
//			    gotoxy(129+24,7-4);foreColor (3);cout << "| $$      ";
//			    gotoxy(129+24,8-4);foreColor (3);cout << "| $$      ";
//			    gotoxy(129+24,9-4);foreColor (3);cout << "| $$      ";
//			    gotoxy(129+24,10-4);foreColor(3);cout << "| $$      ";
//			    gotoxy(129+24,11-4);foreColor(3);cout << "| $$$$$$$$";
//			    gotoxy(129+24,12-4);foreColor(3);cout << "|________/";
//			    gotoxy(129+24,17-4);foreColor(4);cout << " /$$   /$$";
//			    gotoxy(129+24,18-4);foreColor(4);cout << "| $$  | $$";
//			    gotoxy(129+24,19-4);foreColor(4);cout << "| $$  | $$";
//			    gotoxy(129+24,20-4);foreColor(4);cout << "| $$  | $$";
//			    gotoxy(129+24,21-4);foreColor(4);cout << "| $$  | $$";
//			    gotoxy(129+24,22-4);foreColor(4);cout << "| $$  | $$";
//			    gotoxy(129+24,23-4);foreColor(4);cout << "|  $$$$$$/";
//			    gotoxy(129+24,24-4);foreColor(4);cout << " \\______/ ";
//			    gotoxy(129+24,28-4);foreColor(5);cout << "  /$$$$$$ ";
//			    gotoxy(129+24,29-4);foreColor(5);cout << " /$$__  $$";
//			    gotoxy(129+24,30-4);foreColor(5);cout << "| $$  \\__/";
//			    gotoxy(129+24,31-4);foreColor(5);cout << "| $$      ";
//			    gotoxy(129+24,32-4);foreColor(5);cout << "| $$      ";
//			    gotoxy(129+24,33-4);foreColor(5);cout << "| $$    $$";
//			    gotoxy(129+24,34-4);foreColor(5);cout << "|  $$$$$$/";
//			    gotoxy(129+24,35-4);foreColor(5);cout << " \\______/ ";
//			    gotoxy(129+24,40-4);foreColor(6);cout << " /$$   /$$";
//			    gotoxy(129+24,41-4);foreColor(6);cout << "| $$  /$$/";
//			    gotoxy(129+24,42-4);foreColor(6);cout << "| $$ /$$/ ";
//			    gotoxy(129+24,43-4);foreColor(6);cout << "| $$$$$/  ";
//			    gotoxy(129+24,44-4);foreColor(6);cout << "| $$  $$  ";
//			    gotoxy(129+24,45-4);foreColor(6);cout << "| $$\\  $$ ";
//			    gotoxy(129+24,46-4);foreColor(6);cout << "| $$ \\  $$";
//			    gotoxy(129+24,47-4);foreColor(6);cout << "|__/  \\__/";
			
			    //  Caption
				     gotoxy(74,3);foreColor(3);cout << ">>> HERE IS YOUR RECEIPT! <<<";delay(200);
			
			    // gotoxy(68+12,6-3);EPN("PAST SIMPLE"); 
						
						getch();
						return 0;
			
}