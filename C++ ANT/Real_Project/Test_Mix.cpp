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

int main()
{
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
     
     	system("cls");
     
     
	    gotoxy(24,10);foreColor(13);cout << "     .---.       ,-----.      .-_'''-.  .-./`) ,---.   .--.        .---.  .---.     .-''-.  .-------.        .-''-.   ";delay(200);
	    gotoxy(24,11);foreColor(2);cout << "     | ,_|     .'  .-,  '.   '_( )_   \\ \\ .-.')|    \\  |  |        |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";delay(200);
	    gotoxy(24,12);foreColor(4);cout << "   ,-./  )    / ,-.|  \\ _ \\ |(_ o _)|  '/ `-' \\|  ,  \\ |  |        |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";delay(200);
	    gotoxy(24,13);foreColor(5);cout << "   \\  '_ '`) ;  \\  '_ /  | :. (_,_)/___| `-'`-`|  |\\_ \\|  |        |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";delay(200);
	    gotoxy(24,14);foreColor(6);cout << "    > (_)  ) |  _`,/ \\ _/  ||  |  .-----..---. |  _( )_\\  |        |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";delay(200);
	    gotoxy(24,15);foreColor(7);cout << "   (  .  .-' : (  '\\_/ \\   ;'  \\  '-   .'|   | | (_ o _)  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";delay(200);
	    gotoxy(24,16);foreColor(13);cout << "    `-'`-'|___\\ `-/  \\  ) /  \\  `-'`   | |   | |  (_,_)\\  |        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";delay(200);
	    gotoxy(24,17);foreColor(9);cout << "     |        \\'. \\_/``-.'    \\        / |   | |  |    |  |        (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";delay(200);
	    gotoxy(24,18);foreColor(10);cout << "     `--------`  '-----'       `'-...-'  '---' '--'    '--'        '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";delay(600);
	
	    system("cls");
   

    
 
       A:
       int i=3;
       string username,password;
       while(i>=1)
   {
		    gotoxy(24,10-5);foreColor(3);cout << "     .---.       ,-----.      .-_'''-.  .-./`) ,---.   .--.        .---.  .---.     .-''-.  .-------.        .-''-.   ";
		    gotoxy(24,11-5);foreColor(3);cout << "     | ,_|     .'  .-,  '.   '_( )_   \\ \\ .-.')|    \\  |  |        |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";
			gotoxy(24,12-5);foreColor(3);cout << "   ,-./  )    / ,-.|  \\ _ \\ |(_ o _)|  '/ `-' \\|  ,  \\ |  |        |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";
			gotoxy(24,13-5);foreColor(3);cout << "   \\  '_ '`) ;  \\  '_ /  | :. (_,_)/___| `-'`-`|  |\\_ \\|  |        |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";
	    	gotoxy(24,14-5);foreColor(3);cout << "    > (_)  ) |  _`,/ \\ _/  ||  |  .-----..---. |  _( )_\\  |        |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";
			gotoxy(24,15-5);foreColor(3);cout << "   (  .  .-' : (  '\\_/ \\   ;'  \\  '-   .'|   | | (_ o _)  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";
			gotoxy(24,16-5);foreColor(3);cout << "    `-'`-'|___\\ `-/  \\  ) /  \\  `-'`   | |   | |  (_,_)\\  |        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";
			gotoxy(24,17-5);foreColor(3);cout << "     |        \\'. \\_/``-.'    \\        / |   | |  |    |  |        (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";
		    gotoxy(24,18-5);foreColor(3);cout << "     `--------`  '-----'       `'-...-'  '---' '--'    '--'        '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";
				
			DrawRectangle(50+15,23-8,5,14,6);delay(100);// yellow biglongbox leftside
		    DrawRectangle(87+15,23-8,5,14,6);delay(100);// yellow biglongbox rightside
		    DrawRectangle(46+15,24-8,2,12,8);delay(100);//propheh leftside
		    DrawRectangle(94+15,24-8,2,12,8);delay(100);//propheh rightside
		    DrawRectangle(43+15,25-8,2,10,9);delay(100);//blue leftside
		    DrawRectangle(97+15,25-8,2,10,9);delay(100);//blue rightside
		    drawBoxSingleLineWithBG(41+15,26-8,1,8,10);delay(100);//green box left side
		    drawBoxSingleLineWithBG(100+15,26-8,1,8,10);delay(100);//green box right side
		    drawBoxSingleLineWithBG(58+15,23-7,26,1,9);delay(100);//blue on top
		    drawBoxSingleLineWithBG(58+15,35-8,26,2,9);delay(100);//blue on bottom
		    DrawRectangle(58+15,27-8,26,6,6);delay(200);//middle   
		

			gotoxy(58+16,21);foreColor(7);cout << "Enter UserName:";inputLetter(username);fflush(stdin);cin.clear();
			gotoxy(58+16,23);foreColor(7);cout << "Enter Password:";hidePassword(password);fflush(stdin);cin.clear();
			 if(username=="vathxmaehg"&&password=="168")
			 {
			    gotoxy(77,29);cout << "Login Successed!!!";
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
				system("cls");
				char z=205;
				char r=205;
				P:
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
			    
			
			    gotoxy(64+10,34-6);foreColor(4);cout      << "         )  (            ";delay(70);
			    gotoxy(64+10,35-6);foreColor(4);cout      << "      ( /(  )\\ )  *   )  ";delay(70);
			    gotoxy(64+10,36-6);foreColor(4);cout      << " (    )\\())(()/(` )  /(  ";delay(70);
			    gotoxy(64+10,37-6);foreColor(4);cout      << " )\\  ((_)\\  /(_))( )(_)) ";delay(70);
			    gotoxy(64+10,38-6);foreColor(4);cout      << "((_) __((_)(_)) (_(_())  ";delay(70);
			    gotoxy(64+10,39-6);foreColor(3);cout      << "| __|\\ \\/ /|_ _||_   _|  ";delay(70);
			    gotoxy(64+10,40-6);foreColor(3);cout      << "| _|  >  <  | |   | |    ";delay(70);
			    gotoxy(64+10,41-6);foreColor(3);cout      << "|___|/_/\\_\\|___|  |_|    ";delay(70);
			    gotoxy(71+10,44-6);foreColor(3);cout     << "3.EXIT";delay(70);
    
    
    int option1;
    //  ORDER
    HLine(0,27-6,173,7,r);
    HLine(0,30-6,173,7,z);
    gotoxy(59+10,28-6);foreColor(3);cout << "CHOOSE OPTION THAT U WANT BELOW \2";
   
   
  
    gotoxy(59+10,29-6);foreColor(3);cout << "     INPUT YOUR OPTION HERE : "; 
    gotoxy(59+10,29-6);foreColor(3);cout << "     INPUT YOUR OPTION HERE : "; cin >> option1; 
    switch(option1)
    {
    
		case 1:{
			system("cls");
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
          //foreColor(9);gotoxy(3,56);cout << "BACK";
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
    		 system("cls");
    		 cout << "hello";
    		
    		
			break;
		}
		case 2:{
		
			
			
			
			break;
		}
		case 3:{
			system("cls");
			  		 DrawRectangle(30,1,116,2,3);
			    DrawRectangle(13+25,5,101,37,3);delay(100);//big box middle
			    //gotoxy(40,7);cout << "I saw(.....) an accident yesterday morning, while i was(......) going back to my hometown";
			//    drawBoxSingleLineWithBG(16+35,5,2,1,4);delay(100);// very small red box left  above
			//    drawBoxSingleLineWithBG(61+35,5,2,1,4);delay(100);// very small red box right above
			//    drawBoxSingleLineWithBG(16+35,29,2,1,4);delay(100);// very small red box left below
			//    drawBoxSingleLineWithBG(61+35,29,2,1,4);delay(100);// very small red box right below
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
			    
			    
			    gotoxy(13,5-4);foreColor(3);cout  << " $$$$$$\\  ";
			    gotoxy(13,6-4);foreColor(3);cout  << "$$  __$$\\ ";
			    gotoxy(13,7-4);foreColor(3);cout  << "$$ /  \\__|";
			    gotoxy(13,8-4);foreColor(3);cout  << "$$ |$$$$\\ ";
			    gotoxy(13,9-4);foreColor(3);cout  << "$$ |\\_$$ |";
			    gotoxy(13,10-4);foreColor(3);cout << "$$ |  $$ |";
			    gotoxy(13,11-4);foreColor(3);cout << "\\$$$$$$  |";
			    gotoxy(13,12-4);foreColor(3);cout << " \\______/ ";
			    gotoxy(13,17-4);foreColor(4);cout << " $$$$$$\\  ";
			    gotoxy(13,18-4);foreColor(4);cout << "$$  __$$\\ ";
			    gotoxy(13,19-4);foreColor(4);cout << "$$ /  $$ |";
			    gotoxy(13,20-4);foreColor(4);cout << "$$ |  $$ |";
			    gotoxy(13,21-4);foreColor(4);cout << "$$ |  $$ |";
			    gotoxy(13,22-4);foreColor(4);cout << "$$ |  $$ |";
			    gotoxy(13,23-4);foreColor(4);cout << " $$$$$$  |";
			    gotoxy(13,24-4);foreColor(4);cout << " \\______/ ";
			    gotoxy(13,28-4);foreColor(5);cout << " $$$$$$\\  ";
			    gotoxy(13,29-4);foreColor(5);cout << "$$  __$$\\ ";
			    gotoxy(13,30-4);foreColor(5);cout << "$$ /  $$ |";
			    gotoxy(13,31-4);foreColor(5);cout << "$$ |  $$ |";
			    gotoxy(13,32-4);foreColor(5);cout << "$$ |  $$ |";
			    gotoxy(13,33-4);foreColor(5);cout << "$$ |  $$ |";
			    gotoxy(13,34-4);foreColor(5);cout << " $$$$$$  |";
			    gotoxy(13,35-4);foreColor(5);cout << " \\______/ ";
			    gotoxy(13,40-4);foreColor(6);cout << "$$$$$$$\\  ";
			    gotoxy(13,41-4);foreColor(6);cout << "$$  __$$\\ ";
			    gotoxy(13,42-4);foreColor(6);cout << "$$ |  $$ |";
			    gotoxy(13,43-4);foreColor(6);cout << "$$ |  $$ |";
			    gotoxy(13,44-4);foreColor(6);cout << "$$ |  $$ |";
			    gotoxy(13,45-4);foreColor(6);cout << "$$ |  $$ |";
			    gotoxy(13,46-4);foreColor(6);cout << "$$$$$$$  |";
			    gotoxy(13,47-4);foreColor(6);cout << "\\_______/ ";
			    gotoxy(129+24,5-4);foreColor (3);cout << " /$$      ";
			    gotoxy(129+24,6-4);foreColor (3);cout << "| $$      ";
			    gotoxy(129+24,7-4);foreColor (3);cout << "| $$      ";
			    gotoxy(129+24,8-4);foreColor (3);cout << "| $$      ";
			    gotoxy(129+24,9-4);foreColor (3);cout << "| $$      ";
			    gotoxy(129+24,10-4);foreColor(3);cout << "| $$      ";
			    gotoxy(129+24,11-4);foreColor(3);cout << "| $$$$$$$$";
			    gotoxy(129+24,12-4);foreColor(3);cout << "|________/";
			    gotoxy(129+24,17-4);foreColor(4);cout << " /$$   /$$";
			    gotoxy(129+24,18-4);foreColor(4);cout << "| $$  | $$";
			    gotoxy(129+24,19-4);foreColor(4);cout << "| $$  | $$";
			    gotoxy(129+24,20-4);foreColor(4);cout << "| $$  | $$";
			    gotoxy(129+24,21-4);foreColor(4);cout << "| $$  | $$";
			    gotoxy(129+24,22-4);foreColor(4);cout << "| $$  | $$";
			    gotoxy(129+24,23-4);foreColor(4);cout << "|  $$$$$$/";
			    gotoxy(129+24,24-4);foreColor(4);cout << " \\______/ ";
			    gotoxy(129+24,28-4);foreColor(5);cout << "  /$$$$$$ ";
			    gotoxy(129+24,29-4);foreColor(5);cout << " /$$__  $$";
			    gotoxy(129+24,30-4);foreColor(5);cout << "| $$  \\__/";
			    gotoxy(129+24,31-4);foreColor(5);cout << "| $$      ";
			    gotoxy(129+24,32-4);foreColor(5);cout << "| $$      ";
			    gotoxy(129+24,33-4);foreColor(5);cout << "| $$    $$";
			    gotoxy(129+24,34-4);foreColor(5);cout << "|  $$$$$$/";
			    gotoxy(129+24,35-4);foreColor(5);cout << " \\______/ ";
			    gotoxy(129+24,40-4);foreColor(6);cout << " /$$   /$$";
			    gotoxy(129+24,41-4);foreColor(6);cout << "| $$  /$$/";
			    gotoxy(129+24,42-4);foreColor(6);cout << "| $$ /$$/ ";
			    gotoxy(129+24,43-4);foreColor(6);cout << "| $$$$$/  ";
			    gotoxy(129+24,44-4);foreColor(6);cout << "| $$  $$  ";
			    gotoxy(129+24,45-4);foreColor(6);cout << "| $$\\  $$ ";
			    gotoxy(129+24,46-4);foreColor(6);cout << "| $$ \\  $$";
			    gotoxy(129+24,47-4);foreColor(6);cout << "|__/  \\__/";
				// //   HLine(8+35,53,63,4,'\3');delay(100);
				//     // INSTRUCTION
				//     gotoxy(43,3);foreColor(3);cout << ">>> PLEASE, LOOK AT THE INSTRUCTIONS BELOW BEFORE STARTING <<<";delay(200);
				//     gotoxy(1,53);foreColor(4);cout << "   YOU MUST DO THIS EXERCISE\2";
				//     gotoxy(1,54);foreColor(4);cout << "     >>>>>>>>>>><<<<<<<<<<<";
				//     gotoxy(1,55);foreColor(4);cout << "      >>>>>>>>>><<<<<<<<<<";
				//     gotoxy(1,56);foreColor(4);cout << "       >>>STEP BY STEP<<<";
				//     gotoxy(123,53);foreColor(4);cout << " PLEASE, BE CAREFUL!!!";
				//     gotoxy(123,54);foreColor(4);cout << " ONCE YOU WRONG IN ANY";
				//     gotoxy(123,55);foreColor(4);cout << " EXERCISES YOU HAVE TO";
				//     gotoxy(123,56);foreColor(4);cout << "  DO IT ALL AGAIN!!!.";  
				//     // title
			     gotoxy(68+12,6-3);EPN("PAST SIMPLE"); 
			     
			     getch();
			     goto P;
						
			
			
			break;
		}
		case 4:{
			
			
			
			break;
		}
		case 5:{
			
			
			
			break;
		}
		case 6:{
			system("cls");
			goto P;
			
			break;
		}
		case 7:{
			
			system("cls");
			return 0;
			
			break;
		}
	}
    
			break;
		}
		case 2:{
			
		    system("cls");
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
		   
		    HLine(17+48,6,1,4,'\3');delay(100);
		    HLine(17+48,30,1,4,'\4');delay(100);
		    HLine(61+48,6,1,4,'\4');delay(100);
		    HLine(61+48,30,1,4,'\3');delay(100);
		    
    
   
   
        do
        {
		
		     // caption
		    gotoxy(53+13,3);foreColor(0);cout << "WHICH ONE DO YOU WANT TO DO CHOOSE IT BELOW";
		    foreColor(4);cout << " \3"; 
		     // box chooose option grammar
		    DrawRectangle(56+13,7,37,2,4);delay(200);
		   
		    DrawRectangle(58+13,12,33,2,5);delay(200);
		   
		    DrawRectangle(60+13,17,29,2,6);delay(200);
		    
		    DrawRectangle(62+13,22,25,2,9);delay(200);
		  
		    DrawRectangle(64+13,27,21,2,3);delay(200);
		    
		    DrawRectangle(66+13,36,17,2,1);
		    
		    
		    
		    gotoxy(66+13,9) ;foreColor(4);cout << "1.PRESENT CONTINUOUS";delay(200);
		     
		    gotoxy(67+13,14);foreColor(5);cout << "2.PRESENT PERFECT";delay(200);
		    
		    gotoxy(67+13,19);foreColor(6);cout << "3.PRESENT SIMPLE";delay(200);
		    
		    gotoxy(68+13,24);foreColor(9);cout << "4.FUTURE SIMPLE";delay(200);
		     
		    gotoxy(69+13,29);foreColor(3);cout << "5.PAST SIMPLE";delay(200);
		    
		    gotoxy(16+48,37);foreColor(0);cout << "6.BACK";delay(200);
		    gotoxy(57+48,37);foreColor(0);cout << "7.EXIT";delay(200);
       
			    // choose option
			    int optionfood;
			    gotoxy(63+13,34);foreColor(0);cout << "ENTER YOUR OPTION HERE : "; cin >> optionfood;fflush(stdin);cin.clear();
			    switch(optionfood)
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
						break;
						
					}while(optionfood==6);
	
	
	}
		case 3:{
			system("cls");
			return 0;
			break;
		}
		default :{
			system("cls");
			cout << "no option";
			break;
		}
	}
	    getch();
	    exit(0);	
	    
	 }
	 else
	 {  
		    i--;
		    if(i>0)
		    {
			gotoxy(24,10-5);foreColor(4);cout << "     .---.       ,-----.      .-_'''-.  .-./`) ,---.   .--.        .---.  .---.     .-''-.  .-------.        .-''-.   ";
			gotoxy(24,11-5);foreColor(4);cout << "     | ,_|     .'  .-,  '.   '_( )_   \\ \\ .-.')|    \\  |  |        |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";
			gotoxy(24,12-5);foreColor(4);cout << "   ,-./  )    / ,-.|  \\ _ \\ |(_ o _)|  '/ `-' \\|  ,  \\ |  |        |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";
			gotoxy(24,13-5);foreColor(4);cout << "   \\  '_ '`) ;  \\  '_ /  | :. (_,_)/___| `-'`-`|  |\\_ \\|  |        |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";
			gotoxy(24,14-5);foreColor(4);cout << "    > (_)  ) |  _`,/ \\ _/  ||  |  .-----..---. |  _( )_\\  |        |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";
			gotoxy(24,15-5);foreColor(4);cout << "   (  .  .-' : (  '\\_/ \\   ;'  \\  '-   .'|   | | (_ o _)  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";
			gotoxy(24,16-5);foreColor(4);cout << "    `-'`-'|___\\ `-/  \\  ) /  \\  `-'`   | |   | |  (_,_)\\  |        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";
			gotoxy(24,17-5);foreColor(4);cout << "     |        \\'. \\_/``-.'    \\        / |   | |  |    |  |        (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";
	        gotoxy(24,18-5);foreColor(4);cout << "     `--------`  '-----'       `'-...-'  '---' '--'    '--'        '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";
	
			DrawRectangle(50+15,23-8,5,14,6);delay(100);// yellow biglongbox leftside
		    DrawRectangle(87+15,23-8,5,14,6);delay(100);// yellow biglongbox rightside
		    DrawRectangle(46+15,24-8,2,12,8);delay(100);//propheh leftside
		    DrawRectangle(94+15,24-8,2,12,8);delay(100);//propheh rightside
		    DrawRectangle(43+15,25-8,2,10,9);delay(100);//blue leftside
		    DrawRectangle(97+15,25-8,2,10,9);delay(100);//blue rightside
		    drawBoxSingleLineWithBG(41+15,26-8,1,8,10);delay(100);//green box left side
		    drawBoxSingleLineWithBG(100+15,26-8,1,8,10);delay(100);//green box right side
		    drawBoxSingleLineWithBG(58+15,23-8,26,2,9);delay(100);//blue on top
		    drawBoxSingleLineWithBG(58+15,35-8,26,2,9);delay(100);//blue on bottom
		    DrawRectangle(58+15,27-8,26,6,6);delay(200);//middle   

	       	gotoxy(78,17);foreColor(7);cout <<"Incorrect Input!\n";	
	      	foreColor(4);gotoxy(60,33);cout << "U have Only "<<i<<" Time Left to Input Please Be Careful!!!";
	       	foreColor(5);gotoxy(76,29);cout <<"Enter to Input Again";  // 47
	       	getch();
	       	system("cls");	
	    }
	    else
	    {
	       for(int i=10;i>=1;i--)
	       {
			 
				gotoxy(24,10-5);foreColor(4);cout << "     .---.       ,-----.      .-_'''-.  .-./`) ,---.   .--.        .---.  .---.     .-''-.  .-------.        .-''-.   ";
				gotoxy(24,11-5);foreColor(4);cout << "     | ,_|     .'  .-,  '.   '_( )_   \\ \\ .-.')|    \\  |  |        |   |  |_ _|   .'_ _   \\ |  _ _   \\     .'_ _   \\  ";
				gotoxy(24,12-5);foreColor(4);cout << "   ,-./  )    / ,-.|  \\ _ \\ |(_ o _)|  '/ `-' \\|  ,  \\ |  |        |   |  ( ' )  / ( ` )   '| ( ' )  |    / ( ` )   ' ";
				gotoxy(24,13-5);foreColor(4);cout << "   \\  '_ '`) ;  \\  '_ /  | :. (_,_)/___| `-'`-`|  |\\_ \\|  |        |   '-(_{;}_). (_ o _)  ||(_ o _) /   . (_ o _)  | ";
				gotoxy(24,14-5);foreColor(4);cout << "    > (_)  ) |  _`,/ \\ _/  ||  |  .-----..---. |  _( )_\\  |        |      (_,_) |  (_,_)___|| (_,_).' __ |  (_,_)___| ";
				gotoxy(24,15-5);foreColor(4);cout << "   (  .  .-' : (  '\\_/ \\   ;'  \\  '-   .'|   | | (_ o _)  |        | _ _--.   | '  \\   .---.|  |\\ \\  |  |'  \\   .---. ";
				gotoxy(24,16-5);foreColor(4);cout << "    `-'`-'|___\\ `-/  \\  ) /  \\  `-'`   | |   | |  (_,_)\\  |        |( ' ) |   |  \\  `-'    /|  | \\ `'   / \\  `-'    / ";
				gotoxy(24,17-5);foreColor(4);cout << "     |        \\'. \\_/``-.'    \\        / |   | |  |    |  |        (_{;}_)|   |   \\       / |  |  \\    /   \\       /  ";
		        gotoxy(24,18-5);foreColor(4);cout << "     `--------`  '-----'       `'-...-'  '---' '--'    '--'        '(_,_) '---'    `'-..-'  ''-'   `'-'     `'-..-'   ";
		
				DrawRectangle(50+15,23-8,5,14,6);delay(100);// yellow biglongbox leftside
			    DrawRectangle(87+15,23-8,5,14,6);delay(100);// yellow biglongbox rightside
			    DrawRectangle(46+15,24-8,2,12,8);delay(100);//propheh leftside
			    DrawRectangle(94+15,24-8,2,12,8);delay(100);//propheh rightside
			    DrawRectangle(43+15,25-8,2,10,9);delay(100);//blue leftside
			    DrawRectangle(97+15,25-8,2,10,9);delay(100);//blue rightside
			    drawBoxSingleLineWithBG(41+15,26-8,1,8,10);delay(100);//green box left side
			    drawBoxSingleLineWithBG(100+15,26-8,1,8,10);delay(100);//green box right side
			    drawBoxSingleLineWithBG(58+15,23-8,26,2,9);delay(100);//blue on top
			    drawBoxSingleLineWithBG(58+15,35-8,26,2,9);delay(100);//blue on bottom
			    DrawRectangle(58+15,27-8,26,6,6);delay(200);//middle   
		
			    gotoxy(70,32);foreColor(4);cout << "Please Wait "<< i << "s To Input Again!!";delay(1000);
	       }
	        system("cls");
	       	goto A;
	
	    }	
	 }      	
    }
    
    
    
    
    
    
    getch();
    return 0;
}