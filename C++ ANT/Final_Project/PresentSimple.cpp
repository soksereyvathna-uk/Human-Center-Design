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
	      cout << str[i];delay(30);
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
	FutureSimple:
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
    // title
    gotoxy(68+15,6-3);EPN("FUTURE SIMPLE");
	gotoxy(63,7);foreColor(4);cout << "Please read the instructions before you start.";
	gotoxy(45,9);foreColor(3);cout << "1. Please be careful. If you make a mistake in any exercises, you must redo all of them.";  
	gotoxy(44,11);foreColor(3);cout << "2. The exercise will turn green if correct, or red if incorrect. Press Enter to try again.";   
	gotoxy(58,13);foreColor(3);cout << "3. After finishing, you will get a coupon for your order!";

//	PresentSimple
//	string c1, c2, c3, c4, c5, c6;
//	//////1
//    gotoxy(45,11+8);foreColor(3);cout << "1) ___________________________ (he / drive to work every day)"; gotoxy(45+3,11+8);foreColor(3);getline(cin,c1);fflush(stdin);cin.clear();
//    if(c1=="He drives to work everyday.")
//    {
//    	gotoxy(45,11+8);foreColor(2);cout << "1)                             (he / drive to work every day)"; gotoxy(45+3,11+8);foreColor(2);cout << c1;
//    	/////////2
//    	gotoxy(45,22);foreColor(3);cout << "2) _____________________________ (I / not / think you are right)";gotoxy(45+3,22);foreColor(3);getline(cin,c2);fflush(stdin);cin.clear();
//    	if(c2=="I do not think you are right." || c2=="I don't think you are right.")
//    	{
//    		gotoxy(45,22);foreColor(2);cout << "2)                               (I / not / think you are right)";gotoxy(45+3,22);foreColor(2);cout << c2;
//    		/////3
//    		gotoxy(45,25);foreColor(3);cout << "3) _______________________________ (he / not / read the newspaper)";gotoxy(45+3,25);foreColor(3);getline(cin, c3);fflush(stdin);cin.clear();
//    		if(c3=="He does not read the newspaper." || c3=="He doesn't read the newspaper.")
//    		{
//    			gotoxy(45,25);foreColor(2);cout << "3)                                 (he / not / read the newspaper)";gotoxy(45+3,25);foreColor(2);cout << c3;
//    			////////////4
//    			gotoxy(45,28);foreColor(3);cout << "4) ___________________________ (how / he / travel to work)?";gotoxy(45+3,28);foreColor(3);getline(cin, c4);fflush(stdin);cin.clear();
//    			if(c4=="How does he travel to work?")
//    			{
//    				gotoxy(45,28);foreColor(2);cout << "4)                             (how / he / travel to work)?";gotoxy(45+3,28);foreColor(2);cout << c4;
//    				/////5
//    				gotoxy(45,31);foreColor(3);cout << "5) ________________________________ (she / catch a cold every winter)";gotoxy(45+3,31);foreColor(3);getline(cin, c5);fflush(stdin);cin.clear();
//    				if(c5=="She catches a cold every winter.")
//    				{
//    					gotoxy(45,31);foreColor(2);cout << "5)                                  (she / catch a cold every winter)";gotoxy(45+3,31);foreColor(2);cout << c5;	
//    					////////6
//    					gotoxy(45,34);foreColor(3);cout << "6) ______________________ (we / take the bus often)";gotoxy(48,34);foreColor(3);getline(cin, c6);fflush(stdin);cin.clear();
//    					if(c6=="We take the bus often.")
//    					{
//    						gotoxy(45,34);foreColor(2);cout << "6)                        (we / take the bus often)";gotoxy(48,34);foreColor(2);cout << c6;
//						}
//						else
//						{
//							gotoxy(45,34);foreColor(4);cout << "6)                        (we / take the bus often)";gotoxy(48,34);foreColor(4);cout << c6;
//							getch();
//							system("cls");
//							goto PresentSimple;
//						}
//					}					                 
//					else
//					{
//						gotoxy(45,31);foreColor(4);cout << "5)                                  (she / catch a cold every winter)";gotoxy(45+3,31);foreColor(4);cout << c5;
//						getch();
//						system("cls");
//						goto PresentSimple;
//					}									
//				}
//				else
//				{
//					gotoxy(45,28);foreColor(2);cout << "4)                             (how / he / travel to work)?";gotoxy(45+3,28);foreColor(2);cout << c4;
//					getch();
//					system("cls");
//					goto PresentSimple;
//				}
//			}
//			else
//			{
//				gotoxy(45,25);foreColor(4);cout << "3)                                 (he / not / read the newspaper)";gotoxy(45+3,25);foreColor(4);cout << c3;
//				getch();
//				system("cls");
//				goto PresentSimple;
//			}
//		}
//		else
//		{
//			gotoxy(45,22);foreColor(4);cout << "2)                               (I / not / think you are right)";gotoxy(45+3,22);foreColor(4);cout << c2;
//			getch();
//			system("cls");
//			goto PresentSimple;
//		}
//	}
//	else
//	{
//		gotoxy(45,11+8);foreColor(4);cout << "1)                             (he / drive to work every day)"; gotoxy(45+3,11+8);foreColor(4);cout << c1;
//		getch();
//		system("cls");
//		goto PresentSimple;
//	}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    string d1, d2, d3, d4, d5, d6;
    int n1, n2, n3, n4, n5, n6, nn;
    //////////////1
    D1:
    gotoxy(45,19);foreColor(3);cout << "1) Joan thinks the Conservatives ________ (win) the next election."; gotoxy(45+33,19);foreColor(3);getline(cin,d1);fflush(stdin);cin.clear();
    if(d1=="will win")
    {
    	n1 = 1;
    	gotoxy(45,19);foreColor(2);cout << "1) Joan thinks the Conservatives          (win) the next election."; gotoxy(45+33,19);foreColor(2);cout << d1;
    	//////////////2
    	D2:
    	gotoxy(45,22);foreColor(3);cout << "2) If she passes the exam, she _______ (be) very happy.";gotoxy(45+31,22);foreColor(3);getline(cin, d2);fflush(stdin);cin.clear();
    	if(d2=="will be")
    	{
    		n2 = 1;
    		gotoxy(45,22);foreColor(2);cout << "2) If she passes the exam, she         (be) very happy.";gotoxy(45+31,22);foreColor(2);cout << d2;
    		//////////3
    		D3:
    		gotoxy(45,25);foreColor(3);cout << "3) A: I'm cold. B: I ____________ (turn on) the fire.";gotoxy(45+21,25);foreColor(3);getline(cin,d3);fflush(stdin);cin.clear();
    		if(d3=="will turn on")
    		{
    			n3= 1;
    			gotoxy(45,25);foreColor(2);cout << "3) A: I'm cold. B: I              (turn on) the fire.";gotoxy(45+21,25);foreColor(2);cout << d3;
    			///////////4
    			D4:
    			gotoxy(45,28);foreColor(3);cout << "4) The meeting _________ (take) place at 6pm.";gotoxy(45+15,28);foreColor(3);getline(cin,d4);fflush(stdin);cin.clear();
    			if(d4=="will take")
    			{
    				n4 = 1;
    				gotoxy(45,28);foreColor(2);cout << "4) The meeting           (take) place at 6pm.";gotoxy(45+15,28);foreColor(2);cout << d4;
    				///////5
    				D5:
    				gotoxy(45,31);foreColor(3);cout << "5) They _______ (be) home at 10 o'clock.";gotoxy(45+8,31);foreColor(3);getline(cin, d5);fflush(stdin);cin.clear();
    				if(d5=="will be")
    				{
    					n5= 1;
    					gotoxy(45,31);foreColor(2);cout << "5) They         (be) home at 10 o'clock.";gotoxy(45+8,31);foreColor(2);cout << d5;
    					/////// 6
    					D6:
    					gotoxy(45,34);foreColor(3);cout << "6) ____________ (she/get) the job, do you think?";gotoxy(45+3,34);foreColor(3);getline(cin, d6);fflush(stdin);cin.clear();
    					if(d6=="Will she get")
    					{
    						n6 =1;    					
							gotoxy(45,34);foreColor(2);cout << "6)              (she/get) the job, do you think?";gotoxy(45+3,34);foreColor(3);cout << d6;
							nn = n1+n2+n3+n4+n5+n6;
							gotoxy(45,36);foreColor(2);cout << "here here: "<< nn;
							if(nn<=3)
							{
								gotoxy(45,37);foreColor(2);cout << "discount = 50%";
							}
							else
							{
								gotoxy(45,37);foreColor(2);cout << "discount = 100%";
							}
						}
						else
						{
							gotoxy(45,34);foreColor(4);cout << "6)              (she/get) the job, do you think?";gotoxy(45+3,34);foreColor(4);cout << d6;
							getch();
							//goto D6;
						}
					}
					else
					{
						gotoxy(45,31);foreColor(4);cout << "5) They         (be) home at 10 o'clock.";gotoxy(45+8,31);foreColor(4);cout << d5;
						getch();
						goto D6;
					}
    				
				}
				else
				{
					gotoxy(45,28);foreColor(4);cout << "4) The meeting           (take) place at 6pm.";gotoxy(45+15,28);foreColor(4);cout << d4;
					getch();
					goto D5;
				}
			}
			else
			{
				n3 = 0;
				gotoxy(45,25);foreColor(4);cout << "3) A: I'm cold. B: I              (turn on) the fire.";gotoxy(45+21,25);foreColor(4);cout << d3;
				getch();
				goto D4;
			}
		}	
		else
		{
			n2= 0;
			gotoxy(45,22);foreColor(4);cout << "2) If she passes the exam, she         (be) very happy.";gotoxy(45+31,22);foreColor(4);cout << d2;
			getch();
			goto D3;
		}
	}
	else
	{
		n1= 0;
		gotoxy(45,19);foreColor(4);cout << "1) Joan thinks the Conservatives          (win) the next election."; gotoxy(45+33,19);foreColor(4);cout << d1;
		getch();
		goto D2;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	  string d1, d2, d3, d4, d5, d6;
//    //////////////1
//    D1:
//    gotoxy(45,19);foreColor(3);cout << "1) Joan thinks the Conservatives ________ (win) the next election."; gotoxy(45+33,19);foreColor(3);getline(cin,d1);fflush(stdin);cin.clear();
//    if(d1=="will win")
//    {
//    	gotoxy(45,19);foreColor(2);cout << "1) Joan thinks the Conservatives          (win) the next election."; gotoxy(45+33,19);foreColor(2);cout << d1;
//    	//////////////2
//    	D2:
//    	gotoxy(45,22);foreColor(3);cout << "2) If she passes the exam, she _______ (be) very happy.";gotoxy(45+31,22);foreColor(3);getline(cin, d2);fflush(stdin);cin.clear();
//    	if(d2=="will be")
//    	{
//    		gotoxy(45,22);foreColor(2);cout << "2) If she passes the exam, she         (be) very happy.";gotoxy(45+31,22);foreColor(2);cout << d2;
//    		//////////3
//    		D3:
//    		gotoxy(45,25);foreColor(3);cout << "3) A: I'm cold. B: I ____________ (turn on) the fire.";gotoxy(45+21,25);foreColor(3);getline(cin,d3);fflush(stdin);cin.clear();
//    		if(d3=="will turn on")
//    		{
//    			gotoxy(45,25);foreColor(2);cout << "3) A: I'm cold. B: I              (turn on) the fire.";gotoxy(45+21,25);foreColor(2);cout << d3;
//    			///////////4
//    			D4:
//    			gotoxy(45,28);foreColor(3);cout << "4) The meeting _________ (take) place at 6pm.";gotoxy(45+15,28);foreColor(3);getline(cin,d4);fflush(stdin);cin.clear();
//    			if(d4=="will take")
//    			{
//    				gotoxy(45,28);foreColor(2);cout << "4) The meeting           (take) place at 6pm.";gotoxy(45+15,28);foreColor(2);cout << d4;
//    				///////5
//    				D5:
//    				gotoxy(45,31);foreColor(3);cout << "5) They _______ (be) home at 10 o'clock.";gotoxy(45+8,31);foreColor(3);getline(cin, d5);fflush(stdin);cin.clear();
//    				if(d5=="will be")
//    				{
//    					gotoxy(45,31);foreColor(2);cout << "5) They         (be) home at 10 o'clock.";gotoxy(45+8,31);foreColor(2);cout << d5;
//    					/////// 6
//    					D6:
//    					gotoxy(45,34);foreColor(3);cout << "6) ____________ (she/get) the job, do you think?";gotoxy(45+3,34);foreColor(3);getline(cin, d6);fflush(stdin);cin.clear();
//    					if(d6=="Will she get")
//    					{
//    						gotoxy(45,34);foreColor(2);cout << "6)              (she/get) the job, do you think?";gotoxy(45+3,34);foreColor(3);cout << d6;
//						}
//						else
//						{
//							gotoxy(45,34);foreColor(4);cout << "6)              (she/get) the job, do you think?";gotoxy(45+3,34);foreColor(4);cout << d6;
//							getch();
//							goto D6;
//						}
//					}
//					else
//					{
//						gotoxy(45,31);foreColor(4);cout << "5) They         (be) home at 10 o'clock.";gotoxy(45+8,31);foreColor(4);cout << d5;
//						getch();
//						goto D5;
//					}
//    				
//				}
//				else
//				{
//					gotoxy(45,28);foreColor(4);cout << "4) The meeting           (take) place at 6pm.";gotoxy(45+15,28);foreColor(4);cout << d4;
//					getch();
//					goto D4;
//				}
//			}
//			else
//			{
//				gotoxy(45,25);foreColor(4);cout << "3) A: I'm cold. B: I              (turn on) the fire.";gotoxy(45+21,25);foreColor(4);cout << d3;
//				getch();
//				goto D3;
//			}
//		}	
//		else
//		{
//			gotoxy(45,22);foreColor(4);cout << "2) If she passes the exam, she         (be) very happy.";gotoxy(45+31,22);foreColor(4);cout << d2;
//			getch();
//			goto D2;
//		}
//	}
//	else
//	{
//		gotoxy(45,19);foreColor(4);cout << "1) Joan thinks the Conservatives          (win) the next election."; gotoxy(45+33,19);foreColor(4);cout << d1;
//		getch();
//		goto D1;
//	}

    
	
	
    
    getch();
    return 0;
    
}