#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class JUU{
	public:
		
	int bar;
	char name[30];
	
	void Input()
	{
		cout << "Enter Barcode: "; cin >> bar;fflush(stdin);cin.clear();
		cout << "Enter Name   : "; cin.getline(name, 30);fflush(stdin);cin.clear();
	}
	void Output()
	{
		cout << "Name   : " << name;
		cout << "Barcode: " << bar;
	}
};
JUU ju;
fstream File99;
void Insert()
{
	File99.open("file99.bin", ios::out | ios::app | ios::binary);
	ju.Input();
	File99.write((char*)&ju, sizeof(ju));
	File99.close();	
}
void View()
{
	File99.open("file99.bin", ios::in | ios::binary);
	if(File99.bad())
	{
		cout << "Bye World!!!";
		getch();
	}
	   if (File99.gcount() == 0) 
    {
        cout << "Please input something before viewing!";
        File99.close();
        getch();
        return;  // Exit the function early if file is empty
    }


	File99.read((char*)&ju, sizeof(ju));
	while(!File99.eof())
	{
		ju.Output();
		File99.read((char*)&ju, sizeof(ju));
	}
	
	File99.close();
}

int main()
{

	int o;
	cout << "Enter Your Option: "; cin >> o;fflush(stdin);cin.clear();
	switch(o)
	{
		case 1:{
			Insert();
			break;
		}
		case 2:{
			View();
			break;
		}
	}
			
			
			
			
			
			
			
			
			
			
		
		
		
		
}