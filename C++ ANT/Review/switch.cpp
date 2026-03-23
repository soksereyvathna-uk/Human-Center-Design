#include<iostream>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
using namespace std;
int main()
{
	A:
	int first,second;
	char sign;
//	switch(option)
//	{
//		case 1:{
//			cout << "hello";
//			break;
//		}
//		case 2:{
//			cout << "hi";
//			break;
//		}
//		default:{
//			cout << "lol";
//			break;
//		}
//	}
	cout << "\n\n\t\t Enter First  Number: "; cin >> first;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Second Number: "; cin >> second;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Your option of operation(+, -): "; cin >> sign;fflush(stdin);cin.clear();
	switch(sign)
	{
		case '+':{
			cout << "\n\n\t\t" << first << " + " << second << " = " << first+second;
			break;
		}
		case '-':{
			cout << "\n\n\t\t" << first << " - " << second << " = " << first-second;
			break;
		}
		default:{
			cout << "\n\n\t\t Not Found!";
			break;            
		}
	}
	
	getch();
	system("cls");
	goto A;
}