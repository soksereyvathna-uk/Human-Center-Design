#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char sign;
	int firstn, secondn;
	float total;
	A:
	cout << "\n\n\t\tEnter Your First  Number: "; cin >> firstn;fflush(stdin);cin.clear();
	cout << "\n\n\t\tEnter Your Second Number: "; cin >> secondn;fflush(stdin);cin.clear();
	cout << "\n\n\t\tEnter The Operation (+, -, x, %): "; cin >> sign;fflush(stdin);cin.clear();
	switch(sign)
	{
		case '+':{
			total = firstn + (float)secondn;
			cout << "\n\n\t\tResult: " << total;
			break;
		}
		case '-':{
			total = (float)firstn - secondn;
			cout << "\n\n\t\tResult: " << total;
			break;
		}
		case '*':{
			total = firstn * (float)secondn;
			cout << "\n\n\t\tResult: " << total;
			break;
		}
		case '/':{
			total = firstn / (float)secondn;
			cout << "\n\n\t\tResult: " << total;
			break;
		}
		default:{
			
			
			cout << "\n\n\t\t Operaation not found!!!";
			getch();
			system("cls");
			goto A;
			break;
		}
	}
}