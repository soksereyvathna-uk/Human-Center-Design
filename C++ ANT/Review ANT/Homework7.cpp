#include<iostream>
#include<conio.h>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
using namespace std;
int main()
{
	A:
	
	int number, time;
	string option;
	cout << "\n\n\t\t Enter Option(Only Odd, Even, General): "; cin >> option;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Number You Want Here  : "; cin >> number;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Time You Want Here    : "; cin >> time;fflush(stdin);cin.clear();
	if(option=="Odd")
	{
		for(int i=1; i<=time; i++)
		{
			if(i%2!=0)
			{
				cout << "\t\t " << number << " x " << i << " = " << number*i;
				cout << "\n";
			}
		}
	}
	else if(option=="Even")
	{
		for(int i =1; i<=time; i++)
		{
			if(i%2==0)
			{
				cout << "\t\t " << number << " x " << i << " = " << number*i;
				cout << "\n";
			}
		}
	}
	else if(option=="General")
	{
		for(int i =1; i<=time; i++)
		{
			cout << "\t\t " << number << " x " << i << " = " << number*i;
			cout << "\n";
		}
	}
	else
	{
		cout << "\t\t Unavailable!!!";
	}
	
	getch();
	system("cls");
	goto A;
	return 0;
	
    
	
}