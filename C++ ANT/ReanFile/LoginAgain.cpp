#include<iostream>
#include<fstream>
#include<iomanip>
#include<conio.h>
#include<cstring>
#include"antheaderplusplus.h"
using namespace std;

class Cregister{
	
	public: 
		char rusername[30], ausername[30];
		int rpassword, apassword;
		
	void FRegister()
	{
		cout << "\nEnter username: "; cin.getline(rusername, 30);fflush(stdin);cin.clear();
		cout << "\nEnter password: "; cin >> rpassword;fflush(stdin);cin.clear();
	}
	void FOutput()
	{
		cout << "\nUsername : " << rusername;
		cout << "\nPassword : " << rpassword << endl;
	}
	void ALogin()
	{
		cout << "\nEnter username: "; cin.get(ausername, 30);fflush(stdin);cin.clear();
		cout << "\nEnter password: "; cin >> apassword;fflush(stdin);cin.clear();
		if(strcmp(ausername, "vathxmaehg")==0 && apassword==1688)
		{
			cout << "\nAdmin login successed!";
		}
		else
		{
			cout << "\nFalse!";
		}
	}
};




fstream RL;
Cregister CR;
void Register()
{
	RL.open("Kaka.bin", ios::out | ios::app);
	CR.FRegister();
	cout << "\nPres enter to login!";
	getch();
	RL.write((char*)&CR, sizeof(CR));
	RL.close();
}
void View()
{
	RL.open("Kaka.bin", ios::in);
	if(RL.good())
	{
		RL.read((char*)&CR, sizeof(CR));
		while(!RL.eof())
		{
			CR.FOutput();
			RL.read((char*)&CR, sizeof(CR));
		}
		
	}
	else
	{
		cout << "\nCan not view, file not found!!!";
	}
	RL.close();
}
void ForgetP()
{
	bool isfoundp = true;
	char fusername[30];
	RL.open("Kaka.bin", ios::in);
	if(RL.bad())
	{
		cout << "\nCan not search file not found!";
	}
	
	cout << "\nEnter your username to find your password: "; cin.getline(fusername, 30);fflush(stdin);cin.clear();
	RL.read((char*)&CR, sizeof(CR));
	while(!RL.eof())
	{
		if(strcmp(fusername, CR.rusername)== 0)
		{
			CR.FOutput();
			isfoundp = true;
			break;
		}
		RL.read((char*)&CR, sizeof(CR));
	}
	if(strcmp(fusername, CR.rusername)!= 0)
	{
		cout << "\nUsername not found!";
	}
	RL.close();
}
void ForgetU()
{
	bool isfoundu = false;
	int u;
	RL.open("Kaka.bin", ios::in);
	if(RL.bad())
	{
		cout << "\nBye world can not find username!";
	}
	cout << "\nEnter password to see your username: "; cin >> u;fflush(stdin);cin.clear();
	RL.read((char*)&CR, sizeof(CR));
	while(!RL.eof())
	{
		if(u== CR.rpassword)
		{
			CR.FOutput();
			isfoundu = true;
		}
		RL.read((char*)&CR, sizeof(CR));
	}
	if(isfoundu == false)
	{
		cout << "\nPassword not found!";
	}
	RL.close();
}
void Login()
{
	
	bool islogin = true;
	char lusername[30];
	int lpassword;
	RL.open("Kaka.bin", ios::in);
	if(RL.bad())
	{
		cout << "\nBye world!";
	}
	cout << "\nEnter username: "; cin.getline(lusername, 30);fflush(stdin);cin.clear();
	cout << "\nEnter password: "; cin >> lpassword;fflush(stdin);cin.clear();
	RL.read((char*)&CR, sizeof(CR));
	while(!RL.eof())
	{
		if(strcmp(lusername, CR.rusername)==0 && lpassword== CR.rpassword)
		{
			cout << "\nLogin successed!!!";
			islogin = true;
			break;
		}
		RL.read((char*)&CR, sizeof(CR));
	}
	if(lpassword != CR.rpassword)
	{
		cout << "\nLogin false";
	}

	RL.close();}
class Main{
	public:
		int option;
	void Admin()
	{
		CR.ALogin();
	}
	void User()
	{
		cout << "\nRegister!";
		Register();
		system("cls");
		cout << "\nLogin";
		Login();
	}
	void RealOption()
	{
		cout << "\nEnter option here (1. Login admin, 2. User, 3. view, 4. Login user, 5. forget password, 6. username): "; cin >> option;fflush(stdin);cin.clear();
		switch(option)
		{
			case 1:{
				
				do{
					system("cls");
					cout << "\nLogin Admin";
					Admin();
					cout << "\nEnter do again!, esc back!";
				}while(getch()!=27);
				system("cls");
				RealOption();
				break;
			}
			case 2:{
				
				do{
					system("cls");
					cout << "\nUser!";
					User();
					cout << "\nEnter do again!, esc back!";
				}while(getch()!=27);
				system("cls");
				RealOption();
				
				break;
			}
			case 3:{
				
				do{
					system("cls");
					cout << "\nView";
					View();
					cout << "\nEnter do again!, esc back!";
				}while(getch()!=27);
				system("cls");
				RealOption();
				break;
			}
			case 4:{
				
				do{
					system("cls");
					cout << "\nUser login";
					Login();
					cout << "\nEnter do again!, esc back!";
				}while(getch()!=27);
				system("cls");
				RealOption();
				break;
			}
			case 5:{
				
				do{
					system("cls");
					cout << "\nForger password!";
					ForgetP();
					cout << "\nEnter do again!, esc back!";
				}while(getch()!=27);
				system("cls");
				RealOption();
				break;
			}
			case 6:{
					do{
					system("cls");
					cout << "\nForger password!";
					ForgetU();
					cout << "\nEnter do again!, esc back!";
				}while(getch()!=27);
				system("cls");
				RealOption();
				break;
				break;
			}
		}
	}
};
Main Ma;
int main()
{
	Ma.RealOption();
}