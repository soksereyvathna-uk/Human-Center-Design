#include<iostream>
#include"antheaderInput.h"
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
using namespace std;
int main(){
    FullScreen();
    	
   		string username, password;
   		
   		
	    gotoxy(12,10-5);foreColor(13);cout<< ".-------.        .-''-.    .-_'''-.  .-./`)    .-'''-. ,---------.    .-''-.  .-------.            .---.  .---.     .-''-.  .-------.        .-''-.   ";delay(200);
	    gotoxy(12,11-5);foreColor(2);cout << "|  _ _   \\     .'_ _   \\  '_( )_   \\ \\ .-.')  / _     \\\\          \\ .'_ _   \\ |  _ _   \\           |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";delay(200);
	    gotoxy(12,12-5);foreColor(4);cout << "| ( ' )  |    / ( ` )   '|(_ o _)|  '/ `-' \\ (`' )/`--' `--.  ,---'/ ( ` )   '| ( ' )  |           |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";delay(200);
	    gotoxy(12,13-5);foreColor(5);cout << "|(_ o _) /   . (_ o _)  |. (_,_)/___| `-'```(_ o _).       |   \\  . (_ o _)  ||(_ o _) /           |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";delay(200);
	    gotoxy(12,14-5);foreColor(6);cout << "| (_,_).' __ |  (_,_)___||  |  .-----..---.  (_,_). '.     :_ _:  |  (_,_)___|| (_,_).' __         |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";delay(200);
	    gotoxy(12,15-5);foreColor(7);cout << "|  |\\ \\  |  |'  \\   .---.'  \\  '-   .'|   | .---.  \\  :    (_I_)  '  \\   .---.|  |\\ \\  |  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";delay(200);
	    gotoxy(12,16-5);foreColor(13);cout<< "|  | \\ `'   / \\  `-'    / \\  `-'`   | |   | \\    `-'  |   (_(=)_)  \\  `-'    /|  | \\ `'   /        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";delay(200);
	    gotoxy(12,17-5);foreColor(9);cout << "|  |  \\    /   \\       /   \\        / |   |  \\       /     (_I_)    \\       / |  |  \\    /         (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";delay(200);
	    gotoxy(12,18-5);foreColor(10);cout<< "''-'   `'-'     `'-..-'     `'-...-'  '---'   `-...-'      '---'     `'-..-'  ''-'   `'-'          '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";delay(600);
		
		
		// Box Register
		DrawRectangle(50+15,23-8,5,19+3,6);delay(100);// yellow biglongbox leftside
		DrawRectangle(87+15,23-8,5,19+3,6);delay(100);// yellow biglongbox rightside
	    DrawRectangle(46+15,24-8,2,17+3,8);delay(100);//propheh leftside
	    DrawRectangle(94+15,24-8,2,17+3,8);delay(100);//propheh rightside
		DrawRectangle(43+15,25-8,2,15+3,9);delay(100);//blue leftsi
		DrawRectangle(97+15,25-8,2,15+3,9);delay(100);//blue rightside
		drawBoxSingleLineWithBG(41+15,26-8,1,13+3,10);delay(100);//green box left side
		drawBoxSingleLineWithBG(100+15,26-8,1,13+3,10);delay(100);//green box right side
		drawBoxSingleLineWithBG(58+15,23-7,26,1,9);delay(100);//blue on top
		DrawRectangle(58+15,35-8,26,1,9);
		DrawRectangle(59+15,37-8,24,0,8);
		DrawRectangle(60+15,38-8,22,0,6);
		DrawRectangle(61+15,39-8,20,0,10);
		DrawRectangle(58+15,27-8,26,6,6);delay(200);
		
		
			gotoxy(58+16,21);foreColor(7);cout << "Enter UserName:";inputLetter(username);fflush(stdin);cin.clear();
			gotoxy(58+16,23);foreColor(7);cout << "Enter Password:";hidePassword(password);fflush(stdin);cin.clear();
			 if(username=="vathxmaehg"&&password=="168")
			 {
			    gotoxy(76,28);cout << "Register Successed!!!";
			    char a=221;
		    	int j=1;
		    	for(int i=1; i<=26; i++)
		    	{
		    		if(i==14)
		    		{
		    			j=1;
					}
					if(i==26)
					{
						j=1;
					}
					gotoxy(72+i,17);foreColor(j);cout << a;delay(100);
					j++;
				}
			    getch();
			    exit(0);	
			}
			
			
}