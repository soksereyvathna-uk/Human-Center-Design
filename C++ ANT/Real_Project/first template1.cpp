#include<iostream>
#include<conio.h>
#include"antheaderplusplus.h"
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
    char a=221;
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
    //line under
//    HLine(0,52,150,34,'\2');
//    HLine(0,56,150,34,'\2');
//
//    gotoxy(0,54);foreColor(3);cout << "SOKSEREYVATHNA UK";
//    gotoxy(145,54);foreColor(3);cout << "C/C++";
    
    
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
//    drawBoxSingleLineWithBG(7,6,1,11,2);
//    drawBoxSingleLineWithBG(71,6,1,11,4);
//    drawBoxSingleLineWithBG(5,7,1,9,4);
//    drawBoxSingleLineWithBG(73,7,1,9,2);
     drawBoxSingleLineWithBG(35+13,28-8,6,1,2);delay(100);//green small box with heart
     drawBoxSingleLineWithBG(107+13,28-8,6,1,4);delay(100);// red small box with heart
     DrawRectangle(38+13,31-8,1,7,4);delay(100);
     DrawRectangle(110+13,31-8,1,7,2);delay(100);
     HLine(38+13,29-8,5,2,'\3');delay(100);
     HLine(105+13,29-8,5,4,'\3');delay(100);  
     drawBoxSingleLineWithBG(58+13,31-8,32,1,7);delay(100);
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
     
      //buttom
     gotoxy(13+8,10+20);foreColor(2);cout << "        a@@@@a";
     gotoxy(13+8,11+20);foreColor(2);cout << "    a@@@@@@@@@@@@a";
     gotoxy(13+8,12+20);foreColor(2);cout << "  a@@@@@@@@@@@@@@@@a";
     gotoxy(13+8,13+20);foreColor(2);cout << "a@@@@@@@@@@@@@@@@@@@@a";
     gotoxy(13+8,14+20);foreColor(2);cout << "@@@@@@@@@@@@@@@@@@@@@@";
     gotoxy(13+8,15+20);foreColor(2);cout << "  @@@@@@@@@@@@@@@@@@ ";
     gotoxy(13+8,16+20);foreColor(2);cout << "       @@@@@@@@@";
     gotoxy(13+8,17+20);foreColor(8);cout << "         \\\\//";
     gotoxy(13+8,18+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,19+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,20+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,21+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,22+20);foreColor(8);cout << "          ||";
     gotoxy(13+8,23+20);foreColor(8);cout << "        //||\\\\";
     
     
     // claim tree right
     // claim tree  top
     gotoxy(126+20,10+1);foreColor(2);cout << "        a@@@@a";
     gotoxy(126+20,11+1);foreColor(2);cout << "    a@@@@@@@@@@@@a";
     gotoxy(126+20,12+1);foreColor(2);cout << "  a@@@@@@@@@@@@@@@@a";
     gotoxy(126+20,13+1);foreColor(2);cout << "a@@@@@@@@@@@@@@@@@@@@a";
     gotoxy(126+20,14+1);foreColor(2);cout << "@@@@@@@@@@@@@@@@@@@@@@";
     gotoxy(126+20,15+1);foreColor(2);cout << "  @@@@@@@@@@@@@@@@@@ ";
     gotoxy(126+20,16+1);foreColor(2);cout << "       @@@@@@@@@";
     gotoxy(126+20,17+1);foreColor(8);cout << "         \\\\//";
     gotoxy(126+20,18+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,19+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,20+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,21+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,22+1);foreColor(8);cout << "          ||";
     gotoxy(126+20,23+1);foreColor(8);cout << "        //||\\\\";
     
     // buttom
     gotoxy(114+17,10+20);foreColor(2);cout << "        a@@@@a";
     gotoxy(114+17,11+20);foreColor(2);cout << "    a@@@@@@@@@@@@a";
     gotoxy(114+17,12+20);foreColor(2);cout << "  a@@@@@@@@@@@@@@@@a";
     gotoxy(114+17,13+20);foreColor(2);cout << "a@@@@@@@@@@@@@@@@@@@@a";
     gotoxy(114+17,14+20);foreColor(2);cout << "@@@@@@@@@@@@@@@@@@@@@@";
     gotoxy(114+17,15+20);foreColor(2);cout << "  @@@@@@@@@@@@@@@@@@ ";
     gotoxy(114+17,16+20);foreColor(2);cout << "       @@@@@@@@@";
     gotoxy(114+17,17+20);foreColor(8);cout << "         \\\\//";
     gotoxy(114+17,18+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,19+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,20+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,21+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,22+20);foreColor(8);cout << "          ||";
     gotoxy(114+17,23+20);foreColor(8);cout << "        //||\\\\";
     
    
     
     
     
     gotoxy(58+13,30-8);foreColor(3);cout << "Loading...";
     int j=1;
     for(int i=1; i <=32 ; i++)
     {
		if(i==14)
		{
		    j=1;
		}
		if(i==28)
		{
			j=1;
		}
	        foreColor(j);gotoxy(57+13+i,32-8);cout <<a;delay(100);
	        gotoxy(87+13,34-8);cout <<i+i+i+4<< "%";
	       // foreColor(1);gotoxy(-10,-10);cout << " ";
	        j++;
     }
    getch();
    return 0;
}