#include<iostream>
#include<cstring>
using namespace std;
int main()
{

	char coupon[30], name[30];
	int barcode, qty, discount;
	float price, payment , total, dis;

	cout << "\nQuantity: "; cin >> qty;fflush(stdin);cin.clear();
	cout << "\nCoupon: "; cin.getline(coupon, 30);fflush(stdin);cin.clear();
	cout << "\nPrice: "; cin >> price;fflush(stdin);cin.clear();
	total = price*qty;
	if(strcmp(coupon, "V9")== 0 || strcmp(coupon, "V8")== 0 || strcmp(coupon, "V7")== 0)
	{
		discount = 50;
	}
	else if(strcmp(coupon, "king")== 0)
	{
		discount = 0;
	}
	else
	{
		discount = 100;
	}
		
    	if(strcmp(coupon, "B168")== 0 || strcmp(coupon, "C168")==0 || strcmp(coupon, "D168")==0)
    	{
    		discount = 50;
		}
		else if(strcmp(coupon, "A168"))
		{
			discount = 0;
		}
		else
		{
			discount = 100;
		}
	system("cls");
	dis = total - (discount*total)/100;
	payment =total - dis;

	cout << "\ntotal: " << total;
	cout << "\npayment: " << payment;
}