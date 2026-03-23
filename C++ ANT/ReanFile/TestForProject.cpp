#include<iostream>
#include<fstream>
#include<iomanip>
#include"antheaderPlusPlus.h"
#include<conio.h>
using namespace std;
class Admin{
	public:
		int barcode, qty;
		char name[30];
		float price, total, payment;
	void inputUser()
	{
		cout << "\nEnter food or drink barcode: "; cin >> barcode;fflush(stdin);cin.clear();
		cout << "\nEnter food or drink quantity: "; cin >> qty;fflush(stdin);cin.clear();
		//cout << "\nEnter food or drink coupon: "; cin >> coupon;fflush(stdin);cin.clear();
	}
	void inputAdmin()
	{
		cout << "\nEnter food or drink barcode: "; cin >> barcode;fflush(stdin);cin.clear();
		cout << "\nEnter food or drink name: "; cin.getline(name, 30);fflush(stdin);cin.clear();
		//cout << "\nEnter food or drink quantity: "; cin >> qty;fflush(stdin);cin.clear();
		cout << "\nEnter food or drink price: "; cin >> price;fflush(stdin);cin.clear();
	}
	void output()
	{
		cout << left << "\t\t" << setw(15) << barcode << setw(15) << name << setw(15) << price << endl;
		//cout << "\nFood or drink barcode: " << barcode;
		//cout << "\nFood or drink quantity: " << qty;
		//cout << "\nFood or drink name: " << name;
		//cout << "\nFood or drink price: " << price;
	}
	void headerOutput()
	{
		cout << left << "\t\t" << setw(15) << "Barcode" << setw(15) << "Food&Drink Name" << setw(15) << "Price\n"<< endl;
	}
	void edit()
	{
		cout << "\nEnter food or drink barcode: " << barcode;
		cout << "\nEnter food or drink name: "; cin.getline(name, 30);fflush(stdin);cin.clear();
		//cout << "\nEnter food or drink quantity: "; cin >> qty;fflush(stdin);cin.clear();
		cout << "\nEnter food or drink price: "; cin >> price;fflush(stdin);cin.clear();
	}

};

fstream food;
Admin ad;

void insert()
{
	food.open("ErrorReadTest.bin", ios::out | ios:: app);
	ad.inputAdmin();
	food.write((char*)&ad, sizeof(ad));
	food.close();
}
void view()
{
	ad.headerOutput();
	food.open("ErrorReadTest.bin", ios::in);
	if(food.bad())
	{
		cout << "\nBye world file not found!";
	}
	if(food.good())
	{
		food.read((char*)&ad, sizeof(ad));
		while(!food.eof())
		{
			ad.output();
			food.read((char*)&ad, sizeof(ad));
		}
	}
	food.close();
}
void search()
{
	int search1;
	bool isfound = false;
	food.open("ErrorReadTest.bin", ios::in);
	if(food.good())
	{
		cout << "\nSearch by barcode: "; cin >> search1;fflush(stdin);cin.clear();
		food.read((char*)&ad, sizeof(ad));
		while(!food.eof())
		{
			if(search1==ad.barcode)
			{
				ad.headerOutput();
				ad.output();
				
				isfound = true;
			}
		
			food.read((char*)&ad, sizeof(ad));
		}
		if(isfound==false)
		{
			cout << "\bBye world barcode not found!";
		}
		
	}
	if(food.bad())
	{
		cout << "\nCan not search file not found!";
	}
	food.close();
}

fstream backup;

void Delete()
{
	bool isdelete = false;
	int deleteby;
	food.open("ErrorReadTest.bin", ios::in);
	backup.open("BackUp1.bin", ios::out | ios::app);
	if(food.good())
	{
		cout << "\nDelete by barcode: "; cin >> deleteby;fflush(stdin);cin.clear();
		food.read((char*)&ad, sizeof(ad));
		while(!food.eof())
		{
			if(deleteby==ad.barcode)
			{
				isdelete = true;
			}
			if(deleteby!=ad.barcode)
			{
				backup.write((char*)&ad, sizeof(ad));
			}
			food.read((char*)&ad, sizeof(ad));
		}
		if(isdelete== true)
		{
			cout << "\nDelete successed!";
		}
		if(isdelete== false)
		{
			cout << "\nBarcode not found for delete!";
		}
		
	}
	if(food.bad())
	{
		cout << "\nCan not delete file not found!";
	}
	food.close();
	backup.close();
	remove("ErrorReadTest.bin");
	rename("BackUp1.bin","ErrorReadTest.bin");
}

class Menu{
	public:
		int position, option;
	void admin()
	{
		cout << "\nEnter your option (1. insert, 2. view, .....): "; cin >> option;fflush(stdin);cin.clear();
		switch(option)
		{
			case 1:{
			
				do{
					system("cls");
					insert();
					cout << "\nPres [ESC] for back or any keys for insert again!";
					
				}while(getch()!=27);
				system("cls");
				admin();
				break;
			}
			case 2:{
				do{
					system("cls");
					view();
					cout << "\nPres [ESC] for back or any keys for stay here!";
				}while(getch()!=27);
				system("cls");
				admin();
				break;
			}
			case 3:{
				do{
					system("cls");
					search();
					cout << "\nPres [ESC] for back or any keys for search again!";
				}while(getch()!=27);
				system("cls");
				admin();
				break;
			}
			case 4:{
				do{
					system("cls");
					Delete();
					cout << "\nPres [ESC] for back or any keys for delete again!";
				}while(getch()!=27);
				system("cls");
				admin();
				break;
			}
			default:{
				
				system("cls");
				position1();
				break;
			}
		
		}
	}
	void position1()
	{
		cout << "\nEnter your position (1. Admin, 2. User): "; cin >> position;fflush(stdin);cin.clear();
		switch(position)
		{
			case 1:{
				system("cls");
				admin();
				break;
			}
			case 2:{
				system("cls");
				cout <<"\n Have not fill yet!";	
				break;
			}
			default:{
				cout << "\nPosition not found!";
				break;
			}
		}
	}
	
};
Menu me;
int main()
{

	me.position1();
	return 0;
}
