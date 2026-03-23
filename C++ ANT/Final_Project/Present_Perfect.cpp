#include<iostream>
#include<conio.h>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
#include<windows.h>
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
void Login(){
		gotoxy(24,10-5);foreColor(4);cout << "     .---.       ,-----.      .-_'''-.  .-./`) ,---.   .--.        .---.  .---.     .-''-.  .-------.        .-''-.   ";
		gotoxy(24,11-5);foreColor(4);cout << "     | ,_|     .'  .-,  '.   '_( )_   \\ \\ .-.')|    \\  |  |        |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";
		gotoxy(24,12-5);foreColor(4);cout << "   ,-./  )    / ,-.|  \\ _ \\ |(_ o _)|  '/ `-' \\|  ,  \\ |  |        |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";
		gotoxy(24,13-5);foreColor(4);cout << "   \\  '_ '`) ;  \\  '_ /  | :. (_,_)/___| `-'`-`|  |\\_ \\|  |        |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";
		gotoxy(24,14-5);foreColor(4);cout << "    > (_)  ) |  _`,/ \\ _/  ||  |  .-----..---. |  _( )_\\  |        |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";
		gotoxy(24,15-5);foreColor(4);cout << "   (  .  .-' : (  '\\_/ \\   ;'  \\  '-   .'|   | | (_ o _)  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";
		gotoxy(24,16-5);foreColor(4);cout << "    `-'`-'|___\\ `-/  \\  ) /  \\  `-'`   | |   | |  (_,_)\\  |        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";
		gotoxy(24,17-5);foreColor(4);cout << "     |        \\'. \\_/``-.'    \\        / |   | |  |    |  |        (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";
        gotoxy(24,18-5);foreColor(4);cout << "     `--------`  '-----'       `'-...-'  '---' '--'    '--'        '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";
}
int main()
{
    PresentPerfect:
    FullScreen();
    
   
	gotoxy(1,1);Login();
    
    
    
    
    
//    DrawRectangle(30,1,116,2,3);
//    DrawRectangle(13+28,5,95,37,3);delay(30);//big box middle
//    drawBoxSingleLineWithBG(12+25,5,2,10,6);delay(30);// yellow above left
//    drawBoxSingleLineWithBG(65+46+27,5,2,10,6);delay(30);// yellow above right
//    // real
//    drawBoxSingleLineWithBG(12+25,19,2,9,6);delay(30);// yelllow below left
//    drawBoxSingleLineWithBG(65+46+27,19,2,9,6);delay(30);// yellow below right
//    // fake
//    drawBoxSingleLineWithBG(12+25,32,2,10,6);delay(30);// yelllow below left
//    drawBoxSingleLineWithBG(65+46+27,32,2,10,6);delay(30);// yellow below right
//    DrawRectangle(8+25,6,2,35,5);delay(30);// purple left side
//    DrawRectangle(69+46+27,6,2,35,5);delay(30);// purple right side
//    DrawRectangle(5+25,7,2,33,9);delay(30);// blue left side
//    DrawRectangle(72+46+27,7,2,33,9);delay(30);// blue right side
//    DrawRectangle(2+25,8,2,31,3);delay(30);// similar white left
//    DrawRectangle(75+46+27,8,2,31,3);delay(30);// similar white right
//    // title
//    gotoxy(68+16,6-3);EPN("PRSENT PERFECT");
//	gotoxy(63,7);foreColor(4);cout << "Please read the instructions before you start.";
//	gotoxy(45,9);foreColor(3);cout << "1. Please be careful. If you make a mistake in any exercises, you must redo all of them.";  
//	gotoxy(44,11);foreColor(3);cout << "2. The exercise will turn green if correct, or red if incorrect. Press Enter to try again.";   
//	gotoxy(58,13);foreColor(3);cout << "3. After finishing, you will get a coupon for your order!";
//	
//	
//	string b1, b2, b3, b4, b5, b6, b7, b8;
//	//////1
//    gotoxy(58,11+8);foreColor(3);cout << "1) ________________________ (she / pass the exam)?"; gotoxy(58+3,11+8);foreColor(3);getline(cin,b1);fflush(stdin);cin.clear();
//    if(b1=="Has she passed the exam?")			 
//    {
//    	gotoxy(58,11+8);foreColor(2);cout << "1)                          (she / pass the exam)?"; gotoxy(58+3,11+8);foreColor(2);cout << b1;
//    	//////////2
//    	gotoxy(58,14+8);foreColor(3);cout << "2) _________________________ (you / eat lunch yet)?";gotoxy(58+3,14+8);foreColor(3);getline(cin, b2);fflush(stdin);cin.clear();
//    	if(b2=="Have you eaten lunch yet?")     
//    	{
//    		gotoxy(58,14+8);foreColor(2);cout << "2)                            (you / eat lunch yet)?";gotoxy(58+3,14+8);foreColor(2);cout << b2;
//    		//////3
//    		gotoxy(58,17+8);foreColor(3);cout << "3) ____________________ (where / you / be)?";gotoxy(58+3,17+8);foreColor(3);getline(cin, b3);fflush(stdin);cin.clear();
//    		if(b3=="Where have you been?")
//    		{
//    			gotoxy(58,17+8);foreColor(2);cout << "3)                      (where / you / be)?";gotoxy(58+3,17+8);foreColor(2);cout << b3;
//    			//////4
//    			gotoxy(58,20+8);foreColor(3);cout << "4) ___________________________________ (you / never / study French)";gotoxy(58+3,20+8);foreColor(3);getline(cin, b4);fflush(stdin);cin.clear();
//    			if(b4=="You have never studied French.")
//    			{
//    				gotoxy(58,20+8);foreColor(2);cout << "4)                                     (you / never / study French)";gotoxy(58+3,20+8);foreColor(2);cout << b4;
//    				/////////////5
//    				gotoxy(58,23+8);foreColor(3);cout << "5) __________________________ (we / not / go to Paris)";gotoxy(58+3,23+8);foreColor(3);getline(cin, b5);fflush(stdin);cin.clear();
//    				if(b5=="We have not gone to Paris." || b5=="We haven't gone to Paris.")
//    				{
//    					gotoxy(58,23+8);foreColor(2);cout << "5)                            (we / not / go to Paris)";gotoxy(58+3,23+8);foreColor(2);cout << b5;
//    					/////////6
//    					gotoxy(58,26+8);foreColor(3);cout << "6) _________________________ (he / not / meet my mother)";gotoxy(58+3,26+8);foreColor(3);getline(cin,b6);fflush(stdin);cin.clear();
//    					if(b6=="He has not met my mother." || b6=="He hasn't met my mother.")
//    					{
//    						gotoxy(58,26+8);foreColor(2);cout << "6)                           (he / not / meet my mother)";gotoxy(58+3,26+8);foreColor(2);cout << b6;
//						}
//						else
//						{
//							gotoxy(58,26+8);foreColor(4);cout << "6)                           (he / not / meet my mother)";gotoxy(58+3,26+8);foreColor(4);cout << b6;
//							getch();
//							system("cls");
//							goto PresentPerfect;
//						}
//					}
//					else
//					{
//						gotoxy(58,23+8);foreColor(4);cout << "5)                            (we / not / go to Paris)";gotoxy(58+3,23+8);foreColor(4);cout << b5;
//						getch();
//						system("cls");
//						goto PresentPerfect;
//					}
//				}
//				else
//				{
//					gotoxy(58,20+8);foreColor(4);cout << "4)                                       (you / never / study French)";gotoxy(58+3,20+8);foreColor(4);cout << b4;
//					getch();								
//					system("cls");
//					goto PresentPerfect;
//				}
//    			
//			}
//			else
//			{
//				gotoxy(58,17+8);foreColor(4);cout << "3)                      (where / you / be)?";gotoxy(58+3,17+8);foreColor(4);cout << b3;
//				getch();
//				system("cls");
//				goto PresentPerfect;
//			}
//		}
//		else	
//		{
//			gotoxy(58,14+8);foreColor(4);cout << "2)                            (you / eat lunch yet)?";gotoxy(58+3,14+8);foreColor(4);cout << b2;
//			getch();
//			system("cls");
//			goto PresentPerfect;
//		}
//	}
//	else
//	{
//		gotoxy(58,11+8);foreColor(4);cout << "1)                          (she / pass the exam)?"; gotoxy(58+3,11+8);foreColor(4);cout << b1;
//		getch();
//		system("cls");
//		goto PresentPerfect;
//	}


    
	

	
	
    
    getch();
    return 0;
    
}