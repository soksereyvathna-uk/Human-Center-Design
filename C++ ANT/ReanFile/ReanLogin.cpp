#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class La{
	public:
		char username2[30], password2[30];
	
	void FRegister()
	{
		cout << "\nRegister here";
		cout << "\nEnter username: "; cin.getline(username2, 30);fflush(stdin);cin.clear();
		cout << "\nEnter password: "; cin.getline(password2, 30);fflush(stdin);cin.clear();
	}
	void output()
	{
		cout << "\n Username: " << username2 << endl;
		cout << "\n Password: " << password2 << endl;
	}
};
fstream file;
La la;
void Register()
{
	file.open("Login.bin", ios::out | ios::app);
	la.FRegister();
	file.write((char*)&la, sizeof(la));
	file.close();
}
void View()
{
	file.open("Login.bin", ios::in);
	file.read((char*)&la, sizeof(la));
	while(!file.eof())
	{
		la.output();
		file.read((char*)&la, sizeof(la));
	}
	
	file.close();
	
}
void Login()
{
	bool isfound = false;
	file.open("Login.bin", ios::in);
	if(file.good())
	{
		string password1, username1;
		cout << "\nLogin here";
		cout << "\nEnter username: "; getline(cin, username1);fflush(stdin);cin.clear();
		cout << "\nEnter password: "; getline(cin, password1);fflush(stdin);cin.clear();
		file.read((char*)&la, sizeof(la));
		while(!file.eof())
		{
			if(username1 == la.username2 && password1 == la.password2)
			{
				cout << "\n Good job!";
				isfound = true;
			}
			file.read((char*)&la, sizeof(la));
		}
		if(isfound == false)
		{
			cout << "\n Login not success!!!";
		}
	}
	if(file.bad())
	{
		cout << "\nFile not found!!!";
	}
	file.close();
}
class Option{
	public:
		int option;
	
	void Choose()
	{
		cout << "\n1. Login, 2. Register, 3. View";
		cout << "\nChoose your option here: "; cin >> option;fflush(stdin);cin.clear();
		switch(option)
		{
			case 1:{
				
				system("cls");
				Login();
				
				break;
			}
			case 2:{
				
				do{
					system("cls");
					Register();
					
				}while(getch()!=27);
				system("cls");
				Choose();
				
				
				break;
			}
			case 3:{
				
				do{
					system("cls");
					View();
				}while(getch()!=27);
				system("cls");
				Choose();
				break;
			}
		}
	}
};
Option o;
int main()
{
	o.Choose();
}