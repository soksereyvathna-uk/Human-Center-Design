#include<iostream>
#include<iomanip>
#include<conio.h>
#include<fstream>
using namespace std;
class Stock{
	public:
		int qtyStock, barcode;
		char StockName[30];
	void Input()
	{
		cout << "\nBarcode: "; cin >> barcode;fflush(stdin);cin.clear();
		cout << "\nName: "; cin.getline(StockName, 30);fflush(stdin);cin.clear();
		cout << "\nQty : "; cin >> qtyStock;fflush(stdin);cin.clear();
	}
	void Output()
	{
		cout << "\t\t" << setw(10)<< barcode<< setw(10) << StockName << setw(10) << qtyStock << "\n" << endl;
	}
};
fstream file;
Stock st;
void Insert()
{
	file.open("Stokkkkkk111.bin", ios::out | ios::app | ios::binary);
	st.Input();
	file.write((char*)&st, sizeof(st));
	file.close();
}
void View()
{
	file.open("Stokkkkkk111.bin", ios::in | ios::binary);
	if(file.bad())
	{
		system("cls");
		cout << "\nFile Not Found!";
	}
	file.read((char*)&st, sizeof(st));
	while(!file.eof())
	{
		st.Output();
		file.read((char*)&st, sizeof(st));
	}
	file.close();
}
void Decrease()
{
	bool isfound = false;
	int NewBarcode, NewQty;
	file.open("Stokkkkkk111.bin", ios::in | ios::out | ios::binary);
	if(file.bad())
	{
		system("cls");
		cout << "\nFile Not Found!";
	}
	cout << "\nEnter Search Barcode: "; cin >> NewBarcode;fflush(stdin);cin.clear();	
	file.read((char*)&st, sizeof(st));
	while(!file.eof())
	{
		if(NewBarcode == st.barcode)
		{
			cout << "\nEnter New New Qunatity: "; cin >> NewQty;fflush(stdin);cin.clear();

			if(st.qtyStock >= NewQty)
			{
				st.qtyStock -= NewQty;
				int last = file.tellg();
				file.seekp(last - sizeof(st));
				file.write((char*)&st, sizeof(st));
				
				isfound = true;
			}
			if(st.qtyStock  < NewQty)
			{
				cout << "\nQunatity Not Enough";
			}
		}
		file.read((char*)&st, sizeof(st));
	}
	if(isfound == true)
	{
		cout << "\nDecrease Successed!!!";
	}
	file.close();
}
void Main()
{
	int Option;
	cout << "\nEnter Your Option: "; cin >> Option;fflush(stdin);cin.clear();
	switch(Option)
	{
		case 1:{
			do{
				system("cls");
				Insert();
			}while(getch()!=27);
			system("cls");
			Main();
			break;
		}
		case 2:{
			do{
				system("cls");
				View();
			}while(getch()!=27);
			system("cls");
			Main();
			break;
		}
		case 3:{
			do{
				system("cls");
				Decrease();
			}while(getch()!=27);
			system("cls");
			Main();
			break;
		}
	}
}
int main()
{
	Main();
}