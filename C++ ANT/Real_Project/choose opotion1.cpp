#include<iostream>
#include<conio.h>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
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
    char a=205;
    char b=205;
    
    // box leftside on top
    DrawRectangle(20+10,1,1,14,3);delay(100);// yellow biglongbox leftside
    DrawRectangle(57+10,1,1,14,3);delay(100);// yellow biglongbox rightside
    DrawRectangle(16+10,3,1,16,8);delay(100);// black left side
    DrawRectangle(61+10,3,1,16,8);delay(100);// black right side
    DrawRectangle(14+10,4,1,14,9);delay(100);// blue left
    DrawRectangle(63+10,4,1,14,9);delay(100);// blue right
    drawBoxSingleLineWithBG(23+10,1,32,14,3);//big box middle
    drawBoxSingleLineWithBG(15+10,1,2,0,9);//small box left side
    drawBoxSingleLineWithBG(61+10,1,2,0,9);//small box right side
    
     // box right on top
    DrawRectangle(20+72+10,1,1,14,3);delay(100);// yellow biglongbox leftside
    DrawRectangle(57+72+10,1,1,14,3);delay(100);// yellow biglongbox rightside
    DrawRectangle(16+72+10,3,1,16,8);delay(100);// black left side
    DrawRectangle(61+72+10,3,1,16,8);delay(100);// black right side
    DrawRectangle(14+72+10,4,1,14,9);delay(100);// blue left
    DrawRectangle(63+72+10,4,1,14,9);delay(100);// blue right
    drawBoxSingleLineWithBG(23+72+10,1,32,14,1);//big box middle
    drawBoxSingleLineWithBG(15+72+10,1,2,0,9);//small box left side
    drawBoxSingleLineWithBG(61+72+10,1,2,0,9);//small box right side
    // box leftside below
//    DrawRectangle(20,32,1,14,6);delay(100);// yellow biglongbox leftside
//    DrawRectangle(57,32,1,14,6);delay(100);// yellow biglongbox rightside
//    DrawRectangle(16,34,1,16,8);delay(100);// black left side
//    DrawRectangle(61,34,1,16,8);delay(100);// black right side
//    DrawRectangle(14,35,1,14,9);delay(100);// blue left
//    DrawRectangle(63,35,1,14,9);delay(100);// blue right
//    drawBoxSingleLineWithBG(23,32,32,14,2);//big box middle
//    drawBoxSingleLineWithBG(15,32,2,0,9);//small box left side
//    drawBoxSingleLineWithBG(61,32,2,0,9);//small box right side
    
   
    
    // box right below
//    DrawRectangle(20+72,32,1,14,6);delay(100);// yellow biglongbox leftside
//    DrawRectangle(57+72,32,1,14,6);delay(100);// yellow biglongbox rightside
//    DrawRectangle(16+72,34,1,16,8);delay(100);// black left side
//    DrawRectangle(61+72,34,1,16,8);delay(100);// black right side
//    DrawRectangle(14+72,35,1,14,9);delay(100);// blue left
//    DrawRectangle(63+72,35,1,14,9);delay(100);// blue right
//    drawBoxSingleLineWithBG(23+72,32,32,14,4);//big box middle
//    drawBoxSingleLineWithBG(15+72,32,2,0,9);//small box left side
//    drawBoxSingleLineWithBG(61+72,32,2,0,9);//small box right side
    DrawRectangle(20+36+10,31-6,1,14,4);delay(100);// yellow biglongbox leftside
    DrawRectangle(57+36+10,31-6,1,14,4);delay(100);// yellow biglongbox rightside
    DrawRectangle(16+36+10,33-6,1,16,8);delay(100);// black left side
    DrawRectangle(61+36+10,33-6,1,16,8);delay(100);// black right side
    DrawRectangle(14+36+10,34-6,1,14,4);delay(100);// blue left
    DrawRectangle(63+36+10,34-6,1,14,4);delay(100);// blue right
    drawBoxSingleLineWithBG(23+36+10,31-6,32,14,4);//big box middle
    drawBoxSingleLineWithBG(15+36+10,31-6,2,0,4);//small box left side
    drawBoxSingleLineWithBG(61+36+10,31-6,2,0,4);//small box right side
    
    
    // box leftside on top
    gotoxy(28+10,14);foreColor(3);cout << "   1.GRAMMAR EXERCISE \3";delay(100);
    gotoxy(23+10,3);foreColor(3);cout  << "  ______   __    __  ________ ";delay(100);
    gotoxy(23+10,4);foreColor(3);cout  << " /      \\ |  \\  |  \\|        \\";delay(100);
    gotoxy(23+10,5);foreColor(3);cout  << "|  $$$$$$\\| $$\\ | $$| $$$$$$$$";delay(100);
    gotoxy(23+10,6);foreColor(3);cout  << "| $$  | $$| $$$\\| $$| $$__    ";delay(100);
    gotoxy(23+10,7);foreColor(3);cout  << "| $$  | $$| $$$$\\ $$| $$  \\   ";delay(100);
    gotoxy(23+10,8);foreColor(3);cout  << "| $$  | $$| $$\\$$ $$| $$$$$   ";delay(100);
    gotoxy(23+10,9);foreColor(3);cout << "| $$__/ $$| $$ \\$$$$| $$_____ ";delay(100);
    gotoxy(23+10,10);foreColor(3);cout << " \\$$    $$| $$  \\$$$| $$     \\";delay(100);
    gotoxy(23+10,11);foreColor(3);cout << "  \\$$$$$$  \\$$   \\$$ \\$$$$$$$$";delay(100);
    // two
    gotoxy(100+10,13);foreColor(1);cout << "2.ORDER FOOD & DRINK";delay(100);
    gotoxy(97+10,5);foreColor(1);cout  << "######## ##      ##  #######  ";delay(100);
    gotoxy(97+10,6);foreColor(1);cout  << "   ##    ##  ##  ## ##     ## ";delay(100);
    gotoxy(97+10,7);foreColor(1);cout  << "   ##    ##  ##  ## ##     ## ";delay(100);
    gotoxy(97+10,8);foreColor(1);cout  << "   ##    ##  ##  ## ##     ## ";delay(100);
    gotoxy(97+10,9);foreColor(1);cout << "   ##    ##  ##  ## ##     ## ";delay(100);
    gotoxy(97+10,10);foreColor(1);cout << "   ##    ##  ##  ## ##     ## ";delay(100);
    gotoxy(97+10,11);foreColor(1);cout << "   ##     ###  ###   #######  ";delay(100);
    
    // THREE
//    gotoxy(23,36);foreColor(2);cout   << "  _____ _   _ ____  _____ _____ ";delay(100);
//    gotoxy(23,37);foreColor(2);cout   << " |_   _| | | |  _ \\| ____| ____|";delay(100);
//    gotoxy(23,38);foreColor(2);cout   << "   | | | |_| | |_) |  _| |  _|  ";delay(100);
//    gotoxy(23,39);foreColor(2);cout   << "   | | |  _  |  _ <| |___| |___ ";delay(100);
//    gotoxy(23,40);foreColor(2);cout   << "   |_| |_| |_|_| \\_\\     |     |";delay(100); 
//    gotoxy(23,41);foreColor(2);cout   << "   |_| |_| |_|_|  \\_\\____|_____|";delay(100);
//    gotoxy(26,45);foreColor(2);cout   << "3.BOOK CINEMA TICKET & SIT";delay(100);
    
    // FOUR 
//    gotoxy(100,34);foreColor(4);cout      << "         )  (            ";delay(100);
//    gotoxy(100,35);foreColor(4);cout      << "      ( /(  )\\ )  *   )  ";delay(100);
//    gotoxy(100,36);foreColor(4);cout      << " (    )\\())(()/(` )  /(  ";delay(100);
//    gotoxy(100,37);foreColor(4);cout      << " )\\  ((_)\\  /(_))( )(_)) ";delay(100);
//    gotoxy(100,38);foreColor(4);cout      << "((_) __((_)(_)) (_(_())  ";delay(100);
//    gotoxy(100,39);foreColor(3);cout      << "| __|\\ \\/ /|_ _||_   _|  ";delay(100);
//    gotoxy(100,40);foreColor(3);cout      << "| _|  >  <  | |   | |    ";delay(100);
//    gotoxy(100,41);foreColor(3);cout      << "|___|/_/\\_\\|___|  |_|    ";delay(100);
//    gotoxy(108,44);foreColor(3);cout     << "4.EXIT";delay(100);
    gotoxy(64+10,34-6);foreColor(4);cout      << "         )  (            ";delay(70);
    gotoxy(64+10,35-6);foreColor(4);cout      << "      ( /(  )\\ )  *   )  ";delay(70);
    gotoxy(64+10,36-6);foreColor(4);cout      << " (    )\\())(()/(` )  /(  ";delay(70);
    gotoxy(64+10,37-6);foreColor(4);cout      << " )\\  ((_)\\  /(_))( )(_)) ";delay(70);
    gotoxy(64+10,38-6);foreColor(4);cout      << "((_) __((_)(_)) (_(_())  ";delay(70);
    gotoxy(64+10,39-6);foreColor(3);cout      << "| __|\\ \\/ /|_ _||_   _|  ";delay(70);
    gotoxy(64+10,40-6);foreColor(3);cout      << "| _|  >  <  | |   | |    ";delay(70);
    gotoxy(64+10,41-6);foreColor(3);cout      << "|___|/_/\\_\\|___|  |_|    ";delay(70);
    gotoxy(71+10,44-6);foreColor(3);cout     << "3.EXIT";delay(70);
    
    
    
    //  ORDER
    HLine(0,27-6,173,7,b);
    HLine(0,30-6,173,7,a);
//    gotoxy(59+10,28-6);foreColor(3);cout << "CHOOSE OPTION THAT U WANT BELOW \2";
//   // gotoxy(,);foreColor();cout << "kaka";
//    gotoxy(59+10,29-6);foreColor(3);cout << "     INPUT YOUR OPTION HERE : "; 
   
    int MainOption;
				    //  ORDER
				    HLine(0,27-6,173,7,b);
				    HLine(0,30-6,173,7,a);
				    gotoxy(59+10,28-6);foreColor(3);cout << "CHOOSE OPTION THAT U WANT BELOW \2";    									    
				    gotoxy(59+10,29-6);foreColor(3);cout << "     INPUT YOUR OPTION HERE : "; cin >> MainOption;fflush(stdin);cin.clear();
				    switch(MainOption)
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
						default:{
							gotoxy(57+10,41);cout << "Incorrect input,  please press enter";
							gotoxy(57+10,42);cout << "           to input again          ";
							break;
						}
					}
    
    
    
    getch();
    return 0;
}