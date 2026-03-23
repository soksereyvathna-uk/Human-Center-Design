#include<iostream>
#include"antheaderplusplus.h"
#include<conio.h>
#include<fstream>
using namespace std;
int j=1;
	void EPN(const string &str) 
    {
	    for(int i = 0;i<str.length();i++)
	    {
	    	if(j==14)
	    	{
	    		j = 1;
			}
	      foreColor(j);
	      cout << str[i];delay(50);
	      j++;
	    }
    }
void FullScreen(){
  HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFOEX csbi;
    csbi.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
    GetConsoleScreenBufferInfoEx(hOut, &csbi);
    csbi.dwSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    csbi.dwSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    csbi.dwMaximumWindowSize.X = csbi.dwSize.X;
    csbi.dwMaximumWindowSize.Y = csbi.dwSize.Y;
    SetConsoleScreenBufferInfoEx(hOut, &csbi);
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_MAXIMIZE);
}
void ViewBox()
{
	DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48-8,5,55,25,3);delay(100);//big box middle
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(100);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(100);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(100);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(100);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(100);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(100);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(100);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(100);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(100);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit
    DrawRectangle(39+48,36,1,2,3);// box style middle; 
    HLine(17+48-29+25,6,1,4,'\3');delay(100);
    HLine(17+48-29+25,30,1,4,'\4');delay(100);
    HLine(61+48-21+25,6,1,4,'\4');delay(100);
    HLine(61+48-21+25,30,1,4,'\3');delay(100);
    gotoxy(54+12-3,34);foreColor(0);cout << "    PRESS ENTER FOR STAY HERE OR ESC FOR BACK";
    gotoxy(54+12-3,3);foreColor(0);cout << "HERE IS THE SPECIAL MENU IN MY SMALL RESTAURANT ";
    foreColor(4);cout << " \3";   
    gotoxy(17+51-6,7);foreColor(0);cout << left << setw(10) << "BARCODE" << setw(26) << "NAME OF FOOD OR DRINK" << setw(10) << "QUANTITY"  <<"PRICE" <<"\n"<< endl;
}
void InsertBox()
{
    //  VLine(40+35+13,6,23,8,'|');delay(300);
    DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48,5,39,25,3);delay(100);//big box middle
    drawBoxSingleLineWithBG(16+48,5,2,1,4);delay(100);// very small red box left  above
    drawBoxSingleLineWithBG(61+48,5,2,1,4);delay(100);// very small red box right above
    drawBoxSingleLineWithBG(16+48,29,2,1,4);delay(100);// very small red box left below
    drawBoxSingleLineWithBG(61+48,29,2,1,4);delay(100);// very small red box right below
    drawBoxSingleLineWithBG(12+48,5,2,10,6);delay(100);// yellow above left
    drawBoxSingleLineWithBG(65+48,5,2,10,6);delay(100);// yellow above right
    // real
    drawBoxSingleLineWithBG(12+48,20,2,10,6);delay(100);// yelllow below left
    drawBoxSingleLineWithBG(65+48,20,2,10,6);delay(100);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(100);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(100);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(100);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(100);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(100);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(100);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(100);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(100);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(100);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit
    DrawRectangle(39+48,36,1,2,3);// box style middle; 
    HLine(17+48,6,1,4,'\3');delay(100);
    HLine(17+48,30,1,4,'\4');delay(100);
    HLine(61+48,6,1,4,'\4');delay(100);
    HLine(61+48,30,1,4,'\3');delay(100); 
}
void InsertD()
{
    gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: ";
    gotoxy(17+51+8,15);foreColor(0);cout << "NAME OF FOOD OR DRINK";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "ENTER HERE: ";
    gotoxy(17+51+16,20);cout << "QUANTITY";
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout << "ENTER HERE: ";
    gotoxy(17+51+17,25);cout << "PRICE";
    DrawRectangle(17+52,26,37,1,0);
    gotoxy(17+52,27);cout << "ENTER HERE: ";
    // caption
    gotoxy(54+20,3);EPN("INSERT FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3";    
}
void SearchD()
{
	gotoxy(10+58,9);foreColor(0);cout << "SEARCH FOOD OR DRINK BY BARCODE BELOW!!";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : ";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "NAME OF FOOD OR DRINK: ";
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout <<   "QUANTITY  : ";
    DrawRectangle(17+52,26,37,1,0);
    gotoxy(17+52,27);cout << "PRICE     : ";
    // caption
    gotoxy(54+20,3);EPN("SEARCH FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3";    
}
void DeleteD()
{
	gotoxy(10+58,9);foreColor(0);cout << "DELETE FOOD OR DRINK BY BARCODE BELOW!!";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : ";
    DrawRectangle(17+52,16,37,1,0);
    DrawRectangle(17+52,21,37,1,0);
    DrawRectangle(17+52,26,37,1,0);
    // caption
    gotoxy(54+20,3);EPN("DELETE FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3";    
}
void UpdateD()
{
	gotoxy(10+58,9);foreColor(0);cout << "UPDATE FOOD OR DRINK BY BARCODE BELOW!!";
    gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: ";
    gotoxy(17+51+8,15);foreColor(0);cout << "NAME OF FOOD OR DRINK";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "ENTER HERE: ";
    gotoxy(17+51+16,20);cout << "QUANTITY";
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout << "ENTER HERE: ";
    gotoxy(17+51+17,25);cout << "PRICE";
    DrawRectangle(17+52,26,37,1,0);
    gotoxy(17+52,27);cout << "ENTER HERE: ";
    // caption
    gotoxy(54+20,3);EPN("UPDATE FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3";    
}
 class FoodClass{
 	
	public:
		int  barcodef, qtyf, qtyorder;
		char namef[30];
		float pricef;
		
	void Inputf()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> barcodef;fflush(stdin);cin.clear();
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(namef, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin >> qtyf;fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin >> pricef;fflush(stdin);cin.clear();
		gotoxy(54+20,30);foreColor(3);cout << ">>>>>INSERT SUCCESSED<<<<<";
		gotoxy(64+3,34);foreColor(0);cout << "PRESS ENRER TO INSERT MORE OR ESC FOR BACK!";		
	}
	void InputOrder()
	{
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE----: "; cin >> qtyorder;fflush(stdin);cin.clear();
		
	}
	void OutputSearch()
	{
		gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : " << barcodef;
		gotoxy(17+52,17);foreColor(0);cout << "NAME OF FOOD OR DRINK: " << namef;
		gotoxy(17+52,22);foreColor(0);cout << "QUANTITY  : " << qtyf;
		gotoxy(17+52,27);foreColor(0);cout << "PRICE     : " << pricef<< " $";
	}
	void Outputf()
	{
		foreColor(0);cout<<"	" << "\t\t\t\t\t\t\t" << setw(8) << barcodef << setw(26) << namef << setw(10) << qtyf << pricef<<"$" << "\n" <<endl;
	}
	void OutputOrder()
	{
		foreColor(0);cout<<"	" << "\t\t\t\t\t\t\t" << setw(8) << barcodef << setw(26) << namef << setw(10) << qtyorder << pricef*qtyorder<<"$" << "\n" <<endl;
//		gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : " << barcodef;
//		gotoxy(17+52,17);foreColor(0);cout << "NAME OF FOOD OR DRINK: " << namef;
//		gotoxy(17+52,22);foreColor(0);cout << "QUANTITY  : " << qtyorder;
//		gotoxy(17+52,27);foreColor(0);cout << "PRICE     : " << pricef<< " $";
//		gotoxy(17+52,32);foreColor(0);cout << "PAYMENT     : " << pricef*qtyorder<< " $";
	}
	void Editf()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cout << barcodef;
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(namef, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin >> qtyf;fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin >> pricef;fflush(stdin);cin.clear();
	}
 };
fstream file;
FoodClass fc;
fstream file1;
void OrderFF()
{
	int orderidf;
	bool isorderf = false;
	file.open("F8.bin", ios::in | ios::binary);
	file1.open("Order7.bin", ios::out | ios::app | ios::binary);
	if(file.bad())
	{
		system("cls");
		cout << "\nBYE WORLD FILE NOT FOUND!";
	}
	if(file.good())
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> orderidf;fflush(stdin);cin.clear();
		file.read((char*)&fc, sizeof(fc));
		while(!file.eof())
		{
			if(orderidf == fc.barcodef)
			{
				fc.InputOrder();
				if(fc.qtyf >= fc.qtyorder)
				{
					cls();
					fc.OutputOrder();			
					fc.qtyf -= fc.qtyorder;	
					int last = file.tellg();
					file.seekp(last - sizeof(fc));
					file.write((char*)&fc,sizeof(fc));
					file1.write((char*)&fc,sizeof(fc));	//new file						
					isorderf=true;
					break;
				}
				if(fc.qtyf < fc.qtyorder)
				{					
					gotoxy(94,37);cout<<"This item is not enough!"<<endl;
					gotoxy(90,38);cout<<"==>> Press any key to input again"<<endl;
					getch();
				}
			}
			if(orderidf != fc.barcodef)
			{
				cout << "bye";
			}
			file.read((char*)&fc, sizeof(fc));
		}
	}
	file1.close();
	file.close();
}
void InsertF()
{
	InsertBox();
	InsertD();
	file.open("F8.bin", ios::out | ios::app);
	fc.Inputf();
	file.write((char*)&fc, sizeof(fc));
	file.close();
}
void ViewF()
{
	ViewBox();
	file.open("F8.bin", ios::in);
	if(file.bad())
	{
		system("cls");
		cout << "\nBYE WORLD VIEW";
	}
	file.read((char*)&fc, sizeof(fc));
	while(!file.eof())
	{
		fc.Outputf();
		file.read((char*)&fc, sizeof(fc));
	}
	file.close();
}
int main()
{
	FullScreen();
	//OrderFF();
    //InsertF();
    //SearchF();
	//m.MainFoodf();

    ViewF();
    getch();
    return 0;
	
}