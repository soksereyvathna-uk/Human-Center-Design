#include<iostream>
using namespace std;
int main()
{
	string school;
	int room;
	
	
	cout << "\n\n\t\t Enter School You Want Here: "; getline(cin,school);fflush(stdin);cin.clear();
	if(school=="Torren a")
	{
		cout << "\n\n\t\t Enter Room You Want Here: "; cin >> room;fflush(stdin);cin.clear();
		if(room==1)
		{
			cout << "\n\n\t\t Eddy!";
			cout << "\n\n\t\t Tody!";
		}
		else if(room==2)
		{
			cout << "\n\n\t\t Dararoth!";
			cout << "\n\n\t\t Darren!";
		}
		else
		{
			cout << "\n\n\t\t Wrong Room!!!";
		}
	}
	else if(school== "Acleda")
	{
		cout << "\n\n\t\t Enter Room You Want Here: "; cin >> room;fflush(stdin);cin.clear();
		if(room==3)
		{
			cout << "\n\n\t\t Me";
			cout << "\n\n\t\t You";
		}
		else if(room==4)
		{
			cout << "\n\n\t\t Ke";
			cout << "\n\n\t\t Yg";
		}
		else
		{
			cout << "\n\n\t\t Sorry!";
		}
	}
	else
	{
		cout << "\n\n\t\t Wrong School!!!";
	}
}