#include<iostream>
#include"antheaderplusplus.h"
using namespace std;\
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
void KING()
{
 	gotoxy(12,10-5);cout<< ".-------.        .-''-.    .-_'''-.  .-./`)    .-'''-. ,---------.    .-''-.  .-------.            .---.  .---.     .-''-.  .-------.        .-''-.   ";
    gotoxy(12,11-5);cout << "|  _ _   \\     .'_ _   \\  '_( )_   \\ \\ .-.')  / _     \\\\          \\ .'_ _   \\ |  _ _   \\           |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";
    gotoxy(12,12-5);cout << "| ( ' )  |    / ( ` )   '|(_ o _)|  '/ `-' \\ (`' )/`--' `--.  ,---'/ ( ` )   '| ( ' )  |           |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";
    gotoxy(12,13-5);cout << "|(_ o _) /   . (_ o _)  |. (_,_)/___| `-'```(_ o _).       |   \\  . (_ o _)  ||(_ o _) /           |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";
    gotoxy(12,14-5);cout << "| (_,_).' __ |  (_,_)___||  |  .-----..---.  (_,_). '.     :_ _:  |  (_,_)___|| (_,_).' __         |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";
    gotoxy(12,15-5);cout << "|  |\\ \\  |  |'  \\   .---.'  \\  '-   .'|   | .---.  \\  :    (_I_)  '  \\   .---.|  |\\ \\  |  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";
    gotoxy(12,16-5);cout<< "|  | \\ `'   / \\  `-'    / \\  `-'`   | |   | \\    `-'  |   (_(=)_)  \\  `-'    /|  | \\ `'   /        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";
    gotoxy(12,17-5);cout << "|  |  \\    /   \\       /   \\        / |   |  \\       /     (_I_)    \\       / |  |  \\    /         (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";
    gotoxy(12,18-5);cout<< "''-'   `'-'     `'-..-'     `'-...-'  '---'   `-...-'      '---'     `'-..-'  ''-'   `'-'          '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";
}
void RegisterTitle()
{
	int i = 1;
	int j = 1;
	while(i > 0)
	{
	    // Reset j to 1 after it reaches 15
	    j = (i - 1) % 7 + 1;
		delay(150);
	   	gotoxy(12,10-5);foreColor(j);cout<< ".-------.        .-''-.    .-_'''-.  .-./`)    .-'''-. ,---------.    .-''-.  .-------.            .---.  .---.     .-''-.  .-------.        .-''-.   ";
	    gotoxy(12,11-5);foreColor(j+1);cout << "|  _ _   \\     .'_ _   \\  '_( )_   \\ \\ .-.')  / _     \\\\          \\ .'_ _   \\ |  _ _   \\           |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";
	    gotoxy(12,12-5);foreColor(j+2);cout << "| ( ' )  |    / ( ` )   '|(_ o _)|  '/ `-' \\ (`' )/`--' `--.  ,---'/ ( ` )   '| ( ' )  |           |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";
	    gotoxy(12,13-5);foreColor(j+3);cout << "|(_ o _) /   . (_ o _)  |. (_,_)/___| `-'```(_ o _).       |   \\  . (_ o _)  ||(_ o _) /           |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";
	    gotoxy(12,14-5);foreColor(j+4);cout << "| (_,_).' __ |  (_,_)___||  |  .-----..---.  (_,_). '.     :_ _:  |  (_,_)___|| (_,_).' __         |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";
	    gotoxy(12,15-5);foreColor(j+5);cout << "|  |\\ \\  |  |'  \\   .---.'  \\  '-   .'|   | .---.  \\  :    (_I_)  '  \\   .---.|  |\\ \\  |  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";
	    gotoxy(12,16-5);foreColor(j+6);cout<< "|  | \\ `'   / \\  `-'    / \\  `-'`   | |   | \\    `-'  |   (_(=)_)  \\  `-'    /|  | \\ `'   /        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";
	    gotoxy(12,17-5);foreColor(j+7);cout << "|  |  \\    /   \\       /   \\        / |   |  \\       /     (_I_)    \\       / |  |  \\    /         (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";
	    gotoxy(12,18-5);foreColor(j+8);cout<< "''-'   `'-'     `'-..-'     `'-...-'  '---'   `-...-'      '---'     `'-..-'  ''-'   `'-'          '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";

	    i++;
	}
		
}
void D()
{
	int i = 1;
	int j = 1;
	while(i>0)
	{
	    // Reset j to 1 after it reaches 15
	    j = (i - 1) % 10 + 1;
	    //cout << j << "\n"; delay(50);
	    delay(150);
	    foreColor(j);gotoxy(8,8);cout << "Hello world";
		foreColor(j+1);gotoxy(8,9);cout << "hello world";
		foreColor(j+2);gotoxy(8,10);cout << "Hello world";
		foreColor(j+3);gotoxy(8,11);cout << "hello world";
		foreColor(j+4);gotoxy(8,12);cout << "Hello world";
		foreColor(j+5);gotoxy(8,13);cout << "hello world";
	      if (_kbhit()) {  // If a key is pressed
            _getch();  // Consume the key press (this prevents the key from being printed)
            break;  // Exit the loop
        }

	    i++;
	}
	
}

//int main()
//{
//	int age;
//	FullScreen();
//	//RegisterTitle();
//	D();
//	cout << "Enter age: "; cin >> age;fflush(stdin);cin.clear();
//}
int main()
{
	FullScreen();
//	DrawRectangle(0,0,50,50,20);
	for(int i=1; i<=40; i++)
	{
		
	//	system("cls");
		gotoxy(i,5);foreColor(30);cout << "	" << endl;delay(50);
	//	system("cls");
		
	}
	system("cls");
	
	getch();
	return 0;
}