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
	void inputUser()
	{
		cout << "\nEnter food or drink barcode: "; cin >> barcode;fflush(stdin);cin.clear();
		cout << "\nEnter food or drink quantity: "; cin >> qty;fflush(stdin);cin.clear();
		cout << "\nPres enter to see receipt!\n\n";
		
		//cout << "\nEnter food or drink coupon: "; cin >> coupon;fflush(stdin);cin.clear();
		getch();
		cout << "\nFood barcode: " << barcode;
		cout << "\nFood or drink quantity: " << qty;
		cout << "\nPrice : " << price;
		cout << "\nPayment: " << price*qty << " $";
	}

};



////////////////// Create function for write data to file ////////////////
fstream food;
Admin ad; // obj class staff
/// function write data to file
void insert()
{
	food.open("FirstFile.bin", ios::out | ios::app);
	ad.inputAdmin();  							 // call method input() by obj
	food.write((char*)&ad, sizeof(ad));  // write value by(obj st) to file
	food.close();                        // close file
}

/// function read data from file
void view()
{
	ad.headerOutput();
	food.open("FirstFile.bin", ios::in);
	if(food.bad())
	{
		cout << "\nCan not view file not found!";
	}
	if(food.good())
	{
		// first read
		food.read((char*)&ad, sizeof(ad));      // read value from file to obj st. (first row) 
		while(food.eof() != true)               // loop until the last value of file
		{
			ad.output();                           // call method output() for show value
			// secode read
			food.read((char*)&ad, sizeof(ad));  // read value from file to obj st. (next row)
		}
	}
	food.close();	                             // close file
}
void Search()
{
	food.open("FirstFile.bin", ios::in);
	if(food.good())
	{
		bool isfound = false;
		int Search_id;
		cout << "\nInput barcode of food or drink that you wanna search: ";cin >> Search_id;fflush(stdin);cin.clear();
		// first
		food.read((char*)&ad, sizeof(ad));
		while(!food.eof())
		{
			if(Search_id == ad.barcode)
			{
				ad.headerOutput();
				ad.output();
				isfound = true;
			}
			// second read
			food.read((char*)&ad, sizeof(ad));
		}
		if(isfound == false)
		{
			cout << "\nThis barcode of food or drink not found!";
		}
	}
	if(food.bad())
	{
		cout << "\nCan not search file not found!";
	}
	food.close();
}
void Order()
{
	food.open("FirstFile.bin", ios::out | ios::app);
	ad.inputUser();
	food.write((char*)&ad, sizeof(ad));
	food.close();
}
fstream order;
void Order()
{
	food.open("FirstFile.bin", ios::in);
	order.open("Order_FirstFile.bin", ios::out | ios::app);
	if(food.good())
	{
		bool isorder == true;
		int order_barcode;
		cout << "\nEnter barcode: "; cin >> order_barcode;fflush(stdin);cin.clear();
		food.read((char*)&ad, sizeof(ad));
		while(food.eof()!=true)
		{
			if(order_barcode==ad.barcode)
			{
				
			}
		}
	}
	
}
fstream backup;
void Delete()
{
	food.open("FirstFile.bin", ios::in);
	backup.open("BackUp_FirstFile.bin", ios::out | ios::app);
	if(food.good())
	{
		bool isdelete = false;
		int delete_bybarcode;
		cout << "\n\t Input barcode of food or drink that you wanna delete: ";cin >> delete_bybarcode;fflush(stdin);cin.clear();
		// first read
		food.read((char*)&ad, sizeof(ad));
		while(food.eof() != true)
		{
			if(delete_bybarcode == ad.barcode)
			{
				isdelete = true;
			}
			if(delete_bybarcode != ad.barcode)
			{
				backup.write((char*)&ad, sizeof(ad));  // write to new file(backup)
			}
			// second read
		food.read((char*)&ad, sizeof(ad));
		}
		if(isdelete == true)
		{
			cout << "\nDeleted!" << endl;
		}else
		{
			cout << "\nThis barcode of food or drink not found!" << endl;
		}
	}
	food.close();
	backup.close();
	remove("FirstFile.bin");  // delete fiel "FirstFile.bin"
	rename("BackUp_FirstFile.bin", "FirstFile.bin"); // rename "BackUp_FirstFile.bin" to "FirstFile.bin"
}
void Update()
{
	food.open("FirstFile.bin", ios::in | ios::out);
	if(food.good())
	{
		bool isupdated = false;
		int update_bybarcode;
		cout << "\t Input barcode of food or drink that you wanna update: "; cin >> update_bybarcode;fflush(stdin);cin.clear();
		// first read
		food.read((char*)&ad, sizeof(ad));
		while(food.eof() != true)
		{
			if(update_bybarcode == ad.barcode)
			{
				ad.edit();
				food.seekp((int)food.tellg() - sizeof(ad));
				food.write((char*)&ad, sizeof(ad));
				isupdated = true;
			}
			// second read
		food.read((char*)&ad, sizeof(ad));
		}
		if(isupdated==true)
		{
			cout << "\nUpdated!";
		}else
		{
			cout << "\nBarcode not found!!!";
		}
	}
	food.close();
}



class Menu{
	public:
		int position, option;
	void admin()
	{
		cout << "\nEnter your option (1. insert, 2. view, 3. search, 4. delete, 5. update .....): "; cin >> option;fflush(stdin);cin.clear();
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
					Search();
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
			case 5:{
				do{
					system("cls");
					Update();
					cout << "\nPres [ESC] for back or any keys for update again!";
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
	void User()
	{
		int optionU;
		cout << "\n1. View, 2. Order: "; cin >> optionU;fflush(stdin);cin.clear();
		switch(optionU)
		{
			case 1:{
				do{
					system("cls");
					view();
					cout << "\nPres [ESC] for back or any keys for stay here!";
				}while(getch()!=27);
				system("cls");
				User();
				break;
			}
			case 2:{
				do{
					system("cls");
					Order();
					cout << "\nPres [ESC] for back or any keys for stay here!";
				}while(getch()!=27);
				system("cls");
				User();
				break;
			}
			default:{
				cout << "\nBye world idiot!";
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
				User();	
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
