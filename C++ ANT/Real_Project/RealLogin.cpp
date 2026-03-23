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
   
//	    DrawRectangle(50+15,23-8,5,14,6);delay(100);// yellow biglongbox leftside
//	    DrawRectangle(87+15,23-8,5,14,6);delay(100);// yellow biglongbox rightside
//	    DrawRectangle(46+15,24-8,2,12,8);delay(100);//propheh leftside
//	    DrawRectangle(94+15,24-8,2,12,8);delay(100);//propheh rightside
//	    DrawRectangle(43+15,25-8,2,10,9);delay(100);//blue leftside
//	    DrawRectangle(97+15,25-8,2,10,9);delay(100);//blue rightside
//	    drawBoxSingleLineWithBG(41+15,26-8,1,8,10);delay(100);//green box left side
//	    drawBoxSingleLineWithBG(100+15,26-8,1,8,10);delay(100);//green box right side
//	    drawBoxSingleLineWithBG(58+15,23-8,26,2,9);delay(100);//blue on top
//	    drawBoxSingleLineWithBG(58+15,35-8,26,2,9);delay(100);//blue on bottom
//	    DrawRectangle(58+15,27-8,26,6,6);delay(200);//middle   
    
 
       A:
       int i=3;
       string username,password;
       while(i>=1)//1
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
	    gotoxy(77,28);cout << "Login Successed!!!";
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

	       	gotoxy(78,17);foreColor(7);cout <<"Incorrect Input!\n";	
	      	foreColor(4);gotoxy(60,39);cout << "U have Only "<<i<<" Time Left to Input Please Be Careful!!!";
	       	foreColor(5);gotoxy(76,28);cout <<"Enter to Input Again";  // 47
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
		
			    gotoxy(70,39);foreColor(4);cout << "Please Wait "<< i << "s To Input Again!!";delay(100);
	       }
	        system("cls");
	       	goto A;
	
	    }	
	 }      	
    }

    
    getch();
    return 0;
}