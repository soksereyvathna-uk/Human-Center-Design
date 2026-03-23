#include<iostream>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
using namespace std;
int main()
{
	char a=221;
//	
//	int j=1;
//     for(int i=1; i <=32 ; i++)
//     {
//		if(i==14)
//		{
//		    j=1;
//		}
//		if(i==28)
//		{
//			j=1;
//		}
//	        foreColor(j);gotoxy(57+i,32);cout <<a;delay(100);
//	        gotoxy(87,34);cout <<i+i+i+4<< "%";
//	       // foreColor(1);gotoxy(-10,-10);cout << " ";
//	        j++;
//     }
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
		gotoxy(10+i,10);foreColor(j);cout << a;delay(100);
		j++;
	}
    getch();
    return 0;
	
}