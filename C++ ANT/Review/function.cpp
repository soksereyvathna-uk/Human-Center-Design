#include<iostream>
#include"antheaderplusplus.h"
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
   void Box()
	{
			//
    drawBoxSingleLineWithBG(55+13,28-8,1,7,1);delay(100);//small blue left box
    drawBoxSingleLineWithBG(92+13,28-8,1,7,1);delay(100);//small blue right box
    DrawRectangle(52+13,25-8,1,13,2);delay(100);//green long box left side
    DrawRectangle(103+13,20-8,1,30,2);delay(100);//green long box right side
    DrawRectangle(44+13,20-8,1,30,4);delay(100);// red long box left side
    DrawRectangle(47+13,21-8,1,28,3);// similar white left
    DrawRectangle(100+13,21-8,1,28,3);// similar white right
    // another small one
    DrawRectangle(49+13,22-8,1,26,3);//left
    DrawRectangle(98+13,22-8,1,26,3);//right
    DrawRectangle(95+13,25-8,1,13,4);delay(100);
    drawBoxSingleLineWithBG(52+13,40-8,44,1,7);delay(100);
    drawBoxSingleLineWithBG(53+13,41-8,42,1,9);delay(100);
    drawBoxSingleLineWithBG(54+13,42-8,40,1,12);delay(100);
	}
	void Three()
	{
		  // claim tree left top
     gotoxy(2+5,10+1);foreColor(2);cout << "        a@@@@a";
     gotoxy(2+5,11+1);foreColor(2);cout << "    a@@@@@@@@@@@@a";
     gotoxy(2+5,12+1);foreColor(2);cout << "  a@@@@@@@@@@@@@@@@a";
     gotoxy(2+5,13+1);foreColor(2);cout << "a@@@@@@@@@@@@@@@@@@@@a";
     gotoxy(2+5,14+1);foreColor(2);cout << "@@@@@@@@@@@@@@@@@@@@@@";
     gotoxy(2+5,15+1);foreColor(2);cout << "  @@@@@@@@@@@@@@@@@@ ";
     gotoxy(2+5,16+1);foreColor(2);cout << "       @@@@@@@@@";
     gotoxy(2+5,17+1);foreColor(8);cout << "         \\\\//";
     gotoxy(2+5,18+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,19+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,20+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,21+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,22+1);foreColor(8);cout << "          ||";
     gotoxy(2+5,23+1);foreColor(8);cout << "        //||\\\\";
	}
	void Welcome(){
	
		    // welcome
		    gotoxy(12+13,0);foreColor(4);cout << ".--.      .--.    .-''-.    .---.        _______      ,-----.    ,---.    ,---.    .-''-.          ,---------.    ,-----.     ";delay(100);
		    gotoxy(12+13,1);foreColor(4);cout << "|  |_     |  |  .'_ _   \\   | ,_|       /   __  \\   .'  .-,  '.  |    \\  /    |  .'_ _   \\         \\          \\ .'  .-,  '.   ";delay(100);
		    gotoxy(12+13,2);foreColor(1);cout << "| _( )_   |  | / ( ` )   ',-./  )      | ,_/  \\__) / ,-.|  \\ _ \\ |  ,  \\/  ,  | / ( ` )   '         `--.  ,---'/ ,-.|  \\ _ \\  ";delay(100);
		    gotoxy(12+13,3);foreColor(1);cout << "|(_ o _)  |  |. (_ o _)  |\\  '_ '`)  ,-./  )      ;  \\  '_ /  | :|  |\\_   /|  |. (_ o _)  |            |   \\  ;  \\  '_ /  | : ";delay(100);
		    gotoxy(12+13,4);foreColor(2);cout << "| (_,_) \\ |  ||  (_,_)___| > (_)  )  \\  '_ '`)    |  _`,/ \\ _/  ||  _( )_/ |  ||  (_,_)___|            :_ _:  |  _`,/ \\ _/  | ";delay(100);
		    gotoxy(12+13,5);foreColor(2);cout << "|  |/    \\|  |'  \\   .---.(  .  .-'   > (_)  )  __: (  '\\_/ \\   ;| (_ o _) |  |'  \\   .---.            (_I_)  : (  '\\_/ \\   ; ";delay(100);
		    gotoxy(12+13,6);foreColor(5);cout << "|  '  /\\  `  | \\  `-'    / `-'`-'|___(  .  .-'_/  )\\ ```/  \\  )/ |  (_,_)  |  | \\  `-'    /           (_(=)_)  \\ `/  \\  )  /  ";delay(100);
		    gotoxy(12+13,7);foreColor(5);cout << "|    /  \\    |  \\       /   |        \\`-'`-'     /  '. \\_/```.'  |  |      |  |  \\       /             (_I_)    '. \\_/```.'   ";delay(100);
		    gotoxy(12+13,8);foreColor(5);cout << "`---'    `---`   `'-..-'    `--------`  `._____.'     '-----'    '--'      '--'   `'-..-'              '---'      '-----'     ";delay(100);
		    gotoxy(15+40+13,9);foreColor(4);cout << "    )                               )  ";delay(100);
		    gotoxy(15+40+13,10);foreColor(4);cout << " ( /(        (                   ( /(  ";delay(100);
		    gotoxy(15+40+13,11);foreColor(4);cout << " )\\()) (     )\\     (   (   (    )\\()) ";delay(100);
		    gotoxy(15+40+13,12);foreColor(4);cout << "((_)\\  )\\ ((((_)(   )\\  )\\  )\\  ((_)\\  ";delay(100);
		    gotoxy(15+40+13,13);foreColor(4);cout << " _((_)((_) )\\ _ )\\ ((_)((_)((_)  _((_) ";delay(100);
		    gotoxy(15+40+13,14);foreColor(3);cout << "| || || __|(_)_\\(_)\\ \\ / / | __|| \\| | "; delay(100);
		    gotoxy(15+40+13,15);foreColor(3);cout << "| __ || _|  / _ \\   \\ V /  | _| | .` | ";delay(100);
		    gotoxy(15+40+13,16);foreColor(3);cout << "|_||_||___|/_/ \\_\\   \\_/   |___||_|\\_| ";delay(100);
		    
		
		}
int main()
{
	FullScreen();
    int option;
    
    do
    {
    	Welcome();
    	Three();
    	Box();
    	system("cls");
    	cout << "Enter Option: ";cin >> option;
    	
	}while(option==1);
   
    
}