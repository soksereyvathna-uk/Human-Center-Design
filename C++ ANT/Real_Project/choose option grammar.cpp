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
    
    
    // BACK AND EXIT
//    foreColor(9);gotoxy(3,56);cout << "BACK";
//    DrawRectangle(2,55,6,1,9);
//    foreColor(4);gotoxy(143,56);cout << "EXIT";
   //DrawRectangle(142,55,6,1,4);
   // VLine(40+48,6,23,8,'|');delay(300);
    
    //HLine(8+48,53,63,4,'\3');delay(100);
    
    
     // caption
    gotoxy(53+13,3);foreColor(0);cout << "WHICH ONE DO YOU WANT TO DO CHOOSE IT BELOW";
    foreColor(4);cout << " \3"; 
     // box chooose option grammar
    DrawRectangle(56+13,7,37,2,4);delay(200);
   
    DrawRectangle(58+13,12,33,2,5);delay(200);
   
    DrawRectangle(60+13,17,29,2,6);delay(200);
    
    DrawRectangle(62+13,22,25,2,9);delay(200);
  
    DrawRectangle(64+13,27,21,2,3);delay(200);
    
    
    
    gotoxy(66+13,9) ;foreColor(4);cout << "1.PRESENT CONTINUOUS";delay(200);
     
    gotoxy(67+13,14);foreColor(5);cout << "2.PRESENT PERFECT";delay(200);
    
    gotoxy(67+13,19);foreColor(6);cout << "3.PRESENT SIMPLE";delay(200);
    
    gotoxy(68+13,24);foreColor(9);cout << "4.FUTURE SIMPLE";delay(200);
     
    gotoxy(69+13,29);foreColor(3);cout << "5.PAST SIMPLE";delay(200);
    
    gotoxy(16+48,37);foreColor(0);cout << "6.BACK";delay(200);
    gotoxy(57+48,37);foreColor(0);cout << "7.EXIT";delay(200);
       
    // choose option
    int option;
    gotoxy(63+13,34);foreColor(0);cout << "ENTER YOUR OPTION HERE : "; cin >> option;fflush(stdin);cin.clear();
    switch(option)
    {
    	case 1:{
    		
    		
    		
			break;
		}
		case 2:{
			
			
			
			break;
		}
		case 3:{
			
			
			
			break;
		}
		case 4:{
			
			
			
			break;
		}
		case 5:{
			
			
			
			break;
		}
		case 6:{
			
			
			
			break;
		}
		case 7:{
			
			
			
			break;
		}
	}
    
    getch();
    return 0;
}