#include<iostream>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	A:
	int number, time;
	char option;
	cout << "\n\n\t\t Enter First Number  Here: "; cin >> number;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Time You Want Here: "; cin >> time;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Operation     Here: "; cin >> option;fflush(stdin);cin.clear();
//	if(option== '+')
//	{
//		for(int i=1; i<=time; i++)
//		{
//			cout << "\t\t " << number << " + " << i << " = " << number+i;
//			cout << "\n";
//		}
//	}
//	else if(option== '-')
//	{
//		for(int i=1; i<=time; i++)
//		{
//			cout << "\t\t " << number << " - " << i << " = " << number-i;
//			cout << "\n";
//		} 
//	}
//	else if(option== '*')
//	{
//		for(int i=1; i<=time; i++)
//		{
//			cout << "\t\t " << number << " x " << i << " = " << number*i;
//			cout << "\n";
//		}
//	}
//	else if(option== '/')
//	{
//		for(int i=1; i<=time; i++)
//		{
//			cout << "\t\t " << number << " % " << i << " = " << number/i;
//			cout << "\n";
//		}
//	}
//	else
//	{
//		cout << " \n\n\t\t Not Found!!!";
//	}
	
	switch(option)
	{
		case '+':{
			for(int i=1; i<=time; i++)
			{
				cout << "\t\t " << number << " + " << i << " = " << number+i;
				cout << "\n";
			}
			break;
		}
		case '-':{
			for(int i=1; i<=time; i++)
			{
				cout << "\t\t " << number << " - " << i << " = " << number-i;
				cout << "\n";
			}
			break;
		}
		case '*':{
			for(int i=1; i<=time; i++)
			{
				cout << "\t\t " << number << " x " << i << " = " << number*i;
				cout << "\n";
			}
			break;
		}
		case '/':{
			for(int i=1; i<=time; i++)
			{
				cout << "\t\t " << number << " % " << i << " = " << number/i;
				cout << "\n";
			}
			break;
		}
		default :{
			cout << "\t\t\n Not Found!!!";
			break;
		}
	}

	
	getch();
	system("cls");
	goto A;
	return 0;
}