#include<iostream>
#include"antheaderplusplus.h"
#include<conio.h>
#include"antheaderinput.h"
using namespace std;
int main()
{
	A:
	int month;
	cout << "\n\n\t\t Enter The Month You Want Here: "; cin >> month;fflush(stdin);cin.clear();
	if(month==1)
	{
		cout << "\n\n\t\t This is January";
	}
	else if(month==2)
	{
		cout << "\n\n\t\t This is February";
	}
	else if(month==3)
	{
		cout << "\n\n\t\t This is March";
	}
	else if(month==4)
	{
		cout << "\n\n\t\t This is April";
	}
	else if(month==5)
	{
		cout << "\n\n\t\t This is May";
	}
	else if(month==6)
	{
		cout << "\n\n\t\t This is June";
	}
	else if(month==7)
	{
		cout << "\n\n\t\t This is July";
	}
	else if(month==8)
	{
		cout << "\n\n\t\t This is August";
	}
	else if(month==9)
	{
		cout << "\n\n\t\t This is September";
	}
	else if(month==10)
	{
		cout << "\n\n\t\t This is October";
	}
	else if(month==11)
	{
		cout << "\n\n\t\t This is November";
	}
	else if(month==12)
	{
		cout << "\n\n\t\t This is December";
	}
	else
	{
		cout << "\n\n\t\t Incorrect Number!!!";
	}
	
	
	getch();
	system("cls");
	
	goto A;
	return 0;
	
	
}