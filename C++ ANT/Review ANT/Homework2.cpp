#include<iostream>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
#include<conio.h>
using namespace std;
int main()
{
	int barcode, qty;
	string pro_name;
	double price, discount, total, payment;
	foreColor(9);
	cout << "\n\n\t\t >>>>> Enter The Information Here <<<<<";
	cout << "\n\n\t\t Enter Barcode: "; cin >> barcode;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Product Name: "; getline(cin, pro_name);fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Quantity: "; cin >> qty;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Price: "; cin >> price;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Amount Of Discount: "; cin >> discount;fflush(stdin);cin.clear();
	
	total = price*qty;
	payment = total - (total*discount)/100;
	
	foreColor(6);
	cout << "\n\n\t\t Barcode: " << barcode;
	cout << "\n\n\t\t Product Name: " << pro_name;
	cout << "\n\n\t\t Quantity: " << qty;
	cout << "\n\n\t\t Price: " << price << " $";
	cout << "\n\n\t\t Amount Of Discount: " << discount << " %";
	cout << "\n\n\t\t Total: " << total << " $";
	cout << "\n\n\t\t Payment: " << payment << " $";
	
	
	
	getch();
	return 0;
	
	
}