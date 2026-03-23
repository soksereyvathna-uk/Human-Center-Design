#include<iostream>
#include<conio.h>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
using namespace std;
int main()
{
//	h:
//	char a=221;
//	int password;
//	string username;
//	
//	cout << "\n\n\t\t Enter Username Here : "; cin >> username;fflush(stdin);
//	cout << "\n\n\t\t Enter Password Here : "; cin >> password;fflush(stdin);
//	if(username=="vath"&&password==168)
//	{
//		cout << "\n\n\t\t Welcome" << endl;
//		for(int i=1;i<=10;i++)
//		{
//			foreColor(i);cout << a;	delay(200);
//		}
//		system("cls");
//		cout << " big welcome";
//	}
//	else
//	{
//		cout << "\n\n\t\t maehg";
//	}
//	getch();
//	system("cls");
//	goto h;

	char a=221;
	int j=1;
	for(int i=1; i<=32; i++)
	{
		if(i==14)
		{	
			j=1;
		}
		if(i==28)
		{	
			j=1;
		}
		j++;
		
		DrawRectangle(10,10,34,1,4);
		gotoxy(10+i,11);foreColor(j);cout << a;delay(100);
		gotoxy(11,13);foreColor(j);cout << i*3+4 << " %";
		cout << 4-5*2;
	}



		










}