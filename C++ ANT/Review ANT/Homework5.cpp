#include<iostream>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
#include<conio.h>
using namespace std;
int main()
{
	A:
	int khmer, math, english, program, average;
	cout << "\n\n\t\t Enter Your Khmer   Score Here: "; cin >> khmer;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Your Math    Score Here: "; cin >> math;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Your English Score Here: "; cin >> english;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Your Program Score Here: "; cin >> program;fflush(stdin);cin.clear();
	
	average = (khmer+math+english+program)/4;
	
	if(average>89&&average<=100)
	{
		cout << "\n\n\t\t Average: " << average;
		cout << "\n\n\t\t Wow Congratulations \2\3 You Get Grade A!";
	}
	else if(average>79&&average<90)
	{
		cout << "\n\n\t\t Average: " << average;
		cout << "\n\n\t\t Congratulations \2\3 You Get Grade B!";
	}
	else if(average>69&&average<80)
	{
		cout << "\n\n\t\t Average: " << average;
		cout << "\n\n\t\t Congratulations \2\3 You Get Grade C!";
	}
	else if(average>59&&average<70)
	{
		cout << "\n\n\t\t Average: " << average;
		cout << "\n\n\t\t Congratulations \2\3 You Get Grade D!";
	}
	else if(average>49&&average<60)
	{
		cout << "\n\n\t\t Average: " << average;
		cout << "\n\n\t\t Congratulations \2\3 You Get Grade E!";
	}
	else if(average<50&&average>=0)
	{
		cout << "\n\n\t\t Average: " << average;
		cout << "\n\n\t\t You Get Grade F, Please Try Harder!!!";
	}
	else
	{
		cout << "\n\n\t\t Unknown!!!";
	}
	
	
	getch();
	system("cls");
	goto A;
	return 0;

}