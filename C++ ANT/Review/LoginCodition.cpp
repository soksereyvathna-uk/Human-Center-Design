#include<iostream>
#include<conio.h>
#include"antheaderplusplus.h"
using namespace std; 
int main()
{
	A:
	string username, password;
	int i=3;
	char a=221;
	while(i>0)
	{
		cout << "\n\n\t\t Enter Your UserName: "; cin >> username;fflush(stdin);cin.clear();
		cout << "\n\n\t\t Enter Your PassWord: "; cin >> password;fflush(stdin);cin.clear();
		if(username== "Vath" || password== "168")
		{
			cout << "\n\n\t\t Login Successed!!!";
			// Source code for continue process.
		}
		else
		{
			i--;
			if(i>0)
			{
				
				cout << "\n\n\t\t You have only " << i << " time left to input!";
				cout << "\n\n\t\t Please press enter to input again!";
				
				getch();
				system("cls");
			}
			else
			{
				for(int i=10; i>=1; i--)
				{
					gotoxy(0,5);cout << "\n\n\t\t Please wait "<< i << " s !";delay(100);
					gotoxy(0+i,9);cout << a;delay(100);
					
				}
				system("cls");
				goto A;
					
			}
		}
	}

	return 0;
}