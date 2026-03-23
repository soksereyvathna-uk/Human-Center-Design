#include<iostream>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
#include<conio.h>
using namespace std;
int main()
{
	A:
	int option, weeks, months;
	cout << "\n\n\t\t Enter Your Option Here(1 For Week and 2 For Month): "; cin >> option;fflush(stdin);cin.clear();
	switch(option)
	{
		case 1:{
			cout << "\n\n\t\t Enter The Day You Want Here: "; cin >> weeks;fflush(stdin);cin.clear();
			if(weeks==1)
			{
				cout << "\n\n\t\t It's Monday!";
			}
			else if(weeks==2)
			{
				cout << "\n\n\t\t It's Tuesday!";
			}
			else if(weeks==3)
			{
				cout << "\n\n\t\t It's Wednesday!";
			}
			else if(weeks==4)
			{
				cout << "\n\n\t\t It's Thursday!";
			}
			else if(weeks==5)
			{
				cout << "\n\n\t\t It's Friday!";
			}
			else if(weeks==6)
			{
				cout << "\n\n\t\t It's Saturday!";
			}
			else if(weeks==7)
			{
				cout << "\n\n\t\t It's Sunday!";
			}
			else
			{
				cout << "\n\n\t\t Something Wrong!!!";
			}
			break;
		}
		case 2:{
			cout << "\n\n\t\t Enter The Month You Want Here: "; cin >> months;fflush(stdin);cin.clear();
			if(months==1)
			{
				cout << "\n\n\t\t It's January!";
			}
			else if(months==2)
			{
				cout << "\n\n\t\t It's February!";
			}
			else if(months==3)
			{
				cout << "\n\n\t\t It's March!";
			}
			else if(months==4)
			{
				cout << "\n\n\t\t It's April, May, June, July, August, September, October, November, December!!! ";
			}
			else
			{
				cout << "\n\n\t\t Number Not Found!!!";
			}
			break;
		}
		default :{
			cout << "\n\n\t\t Unavaile Number!!!";
			break;
		}
	}
	
	getch();
	system("cls");
	goto A;
	return 0;
}