#include<iostream>
#include"antheaderplusplus.h"
using namespace std;
int main()
{
	string username, password;
	
	foreColor(4);cout << "\n\n\t\t Enter Username: "; cin >> username;fflush(stdin);cin.clear();
	foreColor(5);cout << "\n\n\t\t Enter Password: "; cin >> password;fflush(stdin);cin.clear();
	if(username=="Dararoth"&&password!="Goat")
	{
		foreColor(6);cout << "\n\n\t\t True";
	}
	else
	{
		foreColor(7);cout << "\n\n\t\t False";
	}
}