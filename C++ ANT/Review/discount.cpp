#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long barcode;
	string pro_name;
	int qty,discount;
	float price, payment, total;
	
	cout << "\n\n\t\t Enter Barcode: "; cin >> barcode;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Product Name: "; cin >> pro_name;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Quantity: "; cin >> qty;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Price: "; cin >> price;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Discount: "; cin >> discount;fflush(stdin);cin.clear();
	total= qty*price;
	payment= total-(total*discount)/100;
	cout << "\n\n\t\t Total: " << total << "$";
	cout << "\n\n\t\t Discount: " << discount;
	cout << "\n\n\t\t Payment: " << payment << "$";
}