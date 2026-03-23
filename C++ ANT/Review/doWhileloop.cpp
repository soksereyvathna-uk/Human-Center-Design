#include<iostream>
#include"antheaderplusplus.h"
#include"conio.h"
using namespace std;
int main()
{
//	int i=1;
//	int option, drink, grammar;
//	
//	do
//	{
//		cout << "enter option: "; cin >> option;fflush(stdin);cin.clear();
//		switch(option)
//		{
//			case 1:{
//				cout << "grammar";
//				break;
//			}
//			case 2:{
//				cout << "drink";
//				cout << "Enter Your drink option"; cin >> drink;fflush(stdin);cin.clear();
//				switch(drink)
//				{
//					case 1:{
//						cout << "drink1";
//						i=3;
//						break;
//					}
//					case 2:{
//						i=2;
//						break;
//					}
//					default:{
//						cout << "wrong drink!";
//						break;
//					}
//				}
//				break;
//			}
//			default:{
//				cout << "wrong!";
//				break;
//			}
//		}
//		
//	}while(i<3);







//    A:
//    int i=3;
//	string username, password;
//	
//	while(i>=1)
//	{
//		gotoxy(5,5); cout << "enter username: "; cin >> username;fflush(stdin);cin.clear();
//		gotoxy(5,6); cout << "enter password: "; cin >> password;fflush(stdin);cin.clear();
//		if(username== "vath" && password== "168")
//		{
//			gotoxy(5,7);cout << "login successed!!!";
//		}
//		else
//		{
//			i--;
//			if(i>0)
//			{
//				gotoxy(5,8); cout << "you only have " << i << " time left!!!";
//				gotoxy(5,9); cout << "press enter to input again!";
//				getch();
//				system("cls");
//			}
//			else
//			{
//				for(int i=10; i>=1; i--)
//				{
//					gotoxy(5,10); cout << "Please wait " << i << " s to input again";delay(100);
//				}
//				system("cls");
//				goto A;
//			}
//			
//		}
//	 
//	}

	int i=3;
	int option1, option2;
while(i>0){
	
	cout << "enter option 1: "; cin >> option1;fflush(stdin);cin.clear();
	switch(option1)
	{
		case 1:{
			
			cout << "enter option2: "; cin >> option2;fflush(stdin);cin.clear();
			switch(option2)
		
			case 1:{
				return 0;
				break;
			}
			case 2:{
				
				system("cls");
				break;
			}
			break;
		}
		case 5:{
			cout <<" ,";
			
			break;
		}
		default:{
			cout << " .";
			
			break;
		}
	}
	
}
	

	
	
	
	
		
}