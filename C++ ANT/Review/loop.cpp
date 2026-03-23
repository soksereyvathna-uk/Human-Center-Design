#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int number1,number2;
	cout << "\n\n\t\t Enter Number1: "; cin >> number1;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Number2: "; cin >> number2;fflush(stdin);cin.clear();
	for(int i=1;i<=number2;i++)
	{
		cout <<"\t"<< number1 << " x " << i << " = " << number1*i << endl;
	}
	for(int i=1;i<=number2;i++)
	{
		cout <<"\t"<< number1 << " + " << i << " = " << number1+i << endl;
	}
	for(int i=1;i<=number2;i++)
	{
		cout <<"\t"<< number1 << " - " << i << " = " << number1-i << endl;
	}
	for(int i=1;i<=number2;i++)
	{
		cout <<"\t"<< number1 << " % " << i << " = " << number1/i << endl;
	}
}