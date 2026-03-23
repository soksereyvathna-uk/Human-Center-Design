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
    
    string a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
    //////1
    gotoxy(41,11);foreColor(3);cout << "1) I _____________ (not/drink) any beer last night.";gotoxy(46,11);foreColor(3);getline(cin,a1);fflush(stdin);cin.clear();
    if(a1=="did not drink" || a1== "didn't drink")
    {
    	
    	gotoxy(41,11);foreColor(2);cout << "1) I               (not/drink) any beer last night."; gotoxy(46,11);foreColor(2);cout <<a1;
    	//////2
    	gotoxy(41,12+1);foreColor(3);cout << "2) She ______ (get on) the bus in the centre of the city.";gotoxy(48,12+1);foreColor(3);inputLetter(a2);fflush(stdin);cin.clear();
    	if(a2=="got on")
    	{
    		gotoxy(41,12+1);foreColor(2);cout << "2) She        (get on) the bus in the centre of the city.";gotoxy(48,12+1);foreColor(2);cout<< a2;
    		//////3
    		gotoxy(41,13+2);foreColor(3);cout << "3) What time _____________ (he/get up) yesterday?";gotoxy(54,13+2);foreColor(3);getline(cin, a3);fflush(stdin);cin.clear();
    		if(a3=="did he get up")
    		{
    			gotoxy(41,13+2);foreColor(2);cout << "3) What time               (he/get up) yesterday?";gotoxy(54,13+2);foreColor(2);cout << a3;	
    			//////// 4
    			gotoxy(41,17);foreColor(3);cout << "4) Where ________________ (you/get off) the train?"; gotoxy(50,17);foreColor(3);inputLetter(a4);fflush(stdin);cin.clear();
    			if(a4=="did you get off")
    			{
    				gotoxy(41,17);foreColor(2);cout << "4) Where                 (you/get off) the train?"; gotoxy(50,17);foreColor(2);cout << a4;
					/////5
					gotoxy(41,19);foreColor(3);cout << "5) I ______________ (not/change) trains at Victoria."; gotoxy(46,19);foreColor(3);getline(cin,a5);fflush(stdin);cin.clear();
					if(a5=="did not change" || a5=="didn't change")
					{
						gotoxy(41,19);foreColor(2);cout << "5) I                (not/change) trains at Victoria."; gotoxy(46,19);foreColor(2);cout << a5;
						///////6
						gotoxy(41,21);foreColor(3);cout << "6) They _____ (live) in Paris.";gotoxy(49,21);foreColor(3);inputLetter(a6);fflush(stdin);cin.clear();
						if(a6== "lived")
						{
							gotoxy(41,21);foreColor(2);cout << "6) They       (live) in Paris.";gotoxy(49,21);foreColor(2);cout << a6;
							//////7
							gotoxy(41,23);foreColor(3);cout << "7) She ____ (read) the newspaper yesterday.";gotoxy(48,23);foreColor(3); inputLetter(a7);fflush(stdin);cin.clear();
							if(a7=="read")
							{
								gotoxy(41,23);foreColor(2);cout << "7) She      (read) the newspaper yesterday.";gotoxy(48,23);foreColor(2);cout << a7;
								//////8
								gotoxy(41,25);foreColor(3);cout << "8) ____________ (I/forget) something?";gotoxy(44,25);foreColor(3);inputLetter(a8);fflush(stdin);cin.clear();
								if(a8=="Did I forget")
								{
									gotoxy(41,25);foreColor(2);cout << "8)              (I/forget) something?";gotoxy(44,25);foreColor(2);cout << a8;
									//////////9
									gotoxy(41,27);foreColor(3);cout << "9) He ___ (have) a shower.";gotoxy(47,27);foreColor(3);inputLetter(a9);fflush(stdin);cin.clear();
									if(a9=="had")
									{
										gotoxy(41,27);foreColor(2);cout << "9) He     (have) a shower.";gotoxy(47,27);foreColor(2);cout << a9;
										//////10
										gotoxy(41,29);foreColor(3);cout << "10) We ____ (be) very lucky with the weather."; gotoxy(48,29);foreColor(3);inputLetter(a10);fflush(stdin);cin.clear();
										if(a10=="were")
										{
									 		gotoxy(41,29);foreColor(2);cout << "10) We      (be) very lucky with the weather."; gotoxy(48,29);foreColor(2);cout << a10;
									 		//////11
									 		gotoxy(41,31);foreColor(3);cout << "11) But we (see) ___ some beautiful rainbows.";gotoxy(58,31);foreColor(3);inputLetter(a11);fflush(stdin);cin.clear();
									 		if(a11=="saw")
									 	   {
									 		    gotoxy(41,31);foreColor(2);cout << "11) But we (see)     some beautiful rainbows.";gotoxy(58,31);foreColor(2);cout << a11;
												/////////////12
												gotoxy(41,33);foreColor(3);cout << "12) Last year I _____ (spend) my holiday in Ireland.";gotoxy(57,33);foreColor(3);inputLetter(a12);fflush(stdin);cin.clear();
												if(a12=="spent")
												{
													gotoxy(41,33);foreColor(2);cout << "12) Last year I       (spend) my holiday in Ireland.";gotoxy(57,33);foreColor(2);cout << a12;	
													//////// 13							
													gotoxy(41,35);foreColor(3);cout << "13) I ______ (work) in a bank for ten years.";gotoxy(47,35);foreColor(3);inputLetter(a13);fflush(stdin);cin.clear();
													if(a13=="worked")
													{
														gotoxy(41,35);foreColor(2);cout << "13) I        (work) in a bank for ten years.";gotoxy(47,35);foreColor(2);cout << a13;
														/////////// 14
														gotoxy(41,37);foreColor(3);cout << "14) He ________ (travel) through the middle east last year.";gotoxy(48,37);foreColor(3);inputLetter(a14);fflush(stdin);cin.clear();
														if(a14=="traveled" || a14=="travelled")
														{
															gotoxy(41,37);foreColor(2);cout << "14) He          (travel) through the middle east last year.";gotoxy(48,37);foreColor(2);cout << a14;
															//////////15
															gotoxy(41,39);foreColor(3);cout << "15) We ______ (buy) a new car last weekend.";gotoxy(48,39);foreColor(3);inputLetter(a15);fflush(stdin);cin.clear();
															if(a15=="bought")
															{
																gotoxy(41,39);foreColor(2);cout << "15) We ______ (buy) a new car last weekend.";gotoxy(48,39);foreColor(2);cout << a15;
																///////16
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
																gotoxy(41,39);foreColor(4);cout << "15) We ______ (buy) a new car last weekend.";gotoxy(48,39);foreColor(4);cout << a15;
																getch();
																system("cls");
																goto PresentSimple;	
															}
														}
														else
														{
															gotoxy(41,37);foreColor(4);cout << "14) He          (travel) through the middle east last year.";gotoxy(48,37);foreColor(4);cout << a14;
															getch();
															system("cls");
															goto PresentSimple;		
														}
													}
													else
													{
														gotoxy(41,35);foreColor(4);cout << "13) I        (work) in a bank for ten years.";gotoxy(47,35);foreColor(4);cout << a13;
														getch();
														system("cls");
														goto PresentSimple;	
													}									
												}
												else
												{
													gotoxy(41,33);foreColor(4);cout << "12) Last year I       (spend) my holiday in Ireland.";gotoxy(57,33);foreColor(4);cout << a12;
													getch();
													system("cls");
													goto PresentSimple;	
												}									
										   }
										   else
										   {
										   		gotoxy(41,31);foreColor(4);cout << "11) But we (see)     some beautiful rainbows.";gotoxy(58,31);foreColor(4);cout << a11;
										   		getch();
												system("cls");
												goto PresentSimple;
										   }
										}
										else
										{
											gotoxy(41,29);foreColor(4);cout << "10) We      (be) very lucky with the weather."; gotoxy(48,29);foreColor(4);cout << a10;
											getch();
											system("cls");
											goto PresentSimple;
										}
									}
									else
									{
										gotoxy(41,27);foreColor(4);cout << "9) He     (have) a shower.";gotoxy(47,27);foreColor(4);cout << a9;	
										getch();
										system("cls");
										goto PresentSimple;
									}
								}
								else
								{
									gotoxy(41,25);foreColor(4);cout << "8)              (I/forget) something?";gotoxy(44,25);foreColor(4);cout << a8;
									getch();
									system("cls");
									goto PresentSimple;
								}
							}
							else
							{
								gotoxy(41,23);foreColor(4);cout << "7) She      (read) the newspaper yesterday.";gotoxy(48,23);foreColor(4);cout << a7;
								getch();
								system("cls");
								goto PresentSimple;
							}
						}
						else
						{
							gotoxy(41,21);foreColor(4);cout << "6) They       (live) in Paris.";gotoxy(49,21);foreColor(4);cout << a6;
							getch();
								system("cls");
								goto PresentSimple;
						}
					}
					else
					{
						gotoxy(41,19);foreColor(4);cout << "5) I                (not/change) trains at Victoria."; gotoxy(46,19);foreColor(4);cout << a5;
						getch();
						system("cls");
						goto PresentSimple;
					}
					
				}
				else
				{
					gotoxy(41,17);foreColor(4);cout << "4) Where                 (you/get off) the train?"; gotoxy(50,17);foreColor(4);cout << a4;
					getch();
					system("cls");
					goto PresentSimple;
				}
			}
			else
			{
				gotoxy(41,13+2);foreColor(4);cout << "3) What time               (he/get up) yesterday?";gotoxy(54,13+2);foreColor(4);cout << a3;
				getch();
				system("cls");
				goto PresentSimple;
			}
		}
		else
		{
			gotoxy(41,12+1);foreColor(4);cout << "2) She        (get on) the bus in the centre of the city.";gotoxy(48,12+1);foreColor(4);cout << a2;
			getch();
			system("cls");
			goto PresentSimple;
		}	
	}
	else
	{
		gotoxy(41,11);foreColor(4);cout << "1) I               (not/drink) any beer last night."; gotoxy(46,11);foreColor(4);cout <<a1;
		getch();
		system("cls");
		goto PresentSimple;
	}
    
    
    
    
    
    
    getch();
    return 0;
    
}

