#include<iostream>
#include"antheaderplusplus.h"
using namespace std;
int main()
{
	A:
	string username, password;
	
	cout << "\n\n\t\t Enter Username: "; cin >> username;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Password: "; cin >> password;fflush(stdin);cin.clear();
	if(username== "vath" || password== "168")
	{
		cout << "\n\n\t\t Hello world!!!";
	}
	else
	{
		cout << "\n\n\t\t Hello Heaven!!!";
	}
	
	getch();
	system("cls");
	goto A;
	
}