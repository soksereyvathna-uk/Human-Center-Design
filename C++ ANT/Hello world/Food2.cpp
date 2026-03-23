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
	      cout << str[i];delay(10);
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
void Receipt()
{
	// here is your receipt
     gotoxy(27+11,4-4);foreColor(2);cout << "   _    _                 _____      __     __                _____               _       _   ";delay(50);
     gotoxy(27+11,5-4);foreColor(3);cout << "  | |  | |               |_   _|     \\ \\   / /               |  __ \\             (_)     | |  ";delay(50);
     gotoxy(27+11,6-4);foreColor(4);cout << "  | |__| | ___ _ __ ___    | |  ___   \\ \\_/ /__  _   _ _ __  | |__) |___  ___ ___ _ _ __ | |_ ";delay(50);
     gotoxy(27+11,7-4);foreColor(5);cout << "  |  __  |/ _ \\ '__/ _ \\   | | / __|   \\   / _ \\| | | | '__| |  _  // _ \\/ __/ _ \\ | '_ \\| __|";delay(50);
     gotoxy(27+11,8-4);foreColor(6);cout << "  | |  | |  __/ | |  __/  _| |_\\__ \\    | | (_) | |_| | |    | | \\ \\  __/ (_|  __/ | |_) | |_ ";delay(50);
     gotoxy(27+11,9-4);foreColor(7);cout << "  |_|  |_|\\___|_|  \\___| |_____|___/    |_|\\___/ \\__,_|_|    |_|  \\_\\___|\\___\\___|_| .__/ \\__|";delay(50);
     gotoxy(27+11,10-4);foreColor(8);cout << "                                                                                   | |        ";delay(50);
     gotoxy(27+11,11-4);foreColor(9);cout << "                                                                                   |_|        ";delay(50);
     // thank you so much
     gotoxy(31+11,47-10);foreColor(2);cout << " $$$$$$$$\\ $$\\                           $$\\             $$\\     $$\\                         ";delay(50);
     gotoxy(31+11,48-10);foreColor(2);cout << " \\__$$  __|$$ |                          $$ |            \\$$\\   $$  |                        ";delay(50);
     gotoxy(31+11,49-10);foreColor(2);cout << "    $$ |   $$$$$$$\\   $$$$$$\\  $$$$$$$\\  $$ |  $$\\        \\$$\\ $$  /$$$$$$\\  $$\\   $$\\       ";delay(50);
     gotoxy(31+11,50-10);foreColor(2);cout << "    $$ |   $$  __$$\\  \\____$$\\ $$  __$$\\ $$ | $$  |        \\$$$$  /$$  __$$\\ $$ |  $$ |      ";delay(50);
     gotoxy(31+11,51-10);foreColor(2);cout << "    $$ |   $$ |  $$ | $$$$$$$ |$$ |  $$ |$$$$$$  /          \\$$  / $$ /  $$ |$$ |  $$ |      ";delay(50);
     gotoxy(31+11,52-10);foreColor(2);cout << "    $$ |   $$ |  $$ |$$  __$$ |$$ |  $$ |$$  _$$<            $$ |  $$ |  $$ |$$ |  $$ |      ";delay(50);
     gotoxy(31+11,53-10);foreColor(2);cout << "    $$ |   $$ |  $$ |\\$$$$$$$ |$$ |  $$ |$$ | \\$$\\           $$ |  \\$$$$$$  |\\$$$$$$  |      ";delay(50);
     gotoxy(31+11,54-10);foreColor(2);cout << "    \\__|   \\__|  \\__| \\_______|\\__|  \\__|\\__|  \\__|          \\__|   \\______/  \\______/       ";delay(50);
     //drawBoxSingleLineWithBG(20,5,39,25,3);//big box middle
     DrawRectangle(20+34+11,15-8,1,20,1);delay(50);// blue left side
     DrawRectangle(60+34+11,15-8,1,20,1);delay(50);// blue right side
     DrawRectangle(14+34+11,16-8,4,0,2);delay(50);//green left above
     DrawRectangle(63+34+11,16-8,4,0,2);delay(50);// green right above
     DrawRectangle(14+34+11,39-8,4,0,2);delay(50);// green left below
     DrawRectangle(63+34+11,39-8,4,0,2);delay(50);// green right below
     DrawRectangle(12+34+11,16-8,0,23,7);delay(50);// white left
     DrawRectangle(12+34+9,16-7,0,23,7);
     DrawRectangle(12+34+7,16-6,0,23,7);
     DrawRectangle(69+34+11,16-8,0,23,7);delay(50);// white right
     DrawRectangle(69+34+13,16-7,0,23,7);
     DrawRectangle(69+34+15,16-6,0,23,7);
     drawBoxSingleLineWithBG(20+34+11,42-11,41,1,7);delay(50);//blue  below
     drawBoxSingleLineWithBG(21+34+11,43-11,39,1,9);delay(50);// blue  below
     drawBoxSingleLineWithBG(22+34+11,44-11,37,1,2);delay(50);//green below
    DrawRectangle(17+52,7,33,1,0);
    gotoxy(17+52,8);foreColor(0);cout << "BARCODE: ";
    //gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    DrawRectangle(17+52,11,33,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "NAME: ";
    //gotoxy(17+51+8,14);foreColor(0);cout << "NAME OF FOOD OR DRINK";
    DrawRectangle(17+52,15,33,1,0);
    gotoxy(17+52,16);cout << "QUANTITY: ";
    //gotoxy(17+51+16,18);cout << "QUANTITY";
    DrawRectangle(17+52,19,33,1,0);
    gotoxy(17+52,20);cout << "PRICE: ";
    //gotoxy(17+51+17,22);cout << "PRICE";
    DrawRectangle(17+52,23,33,1,0);
    gotoxy(17+52,24);cout << "TOTAL: ";
    //gotoxy(17+51+16,26);cout << "PAYMENT";
    DrawRectangle(17+52,27,33,1,0);
    gotoxy(17+52,28);cout << "PAYMENT: ";
}
void ViewBox()
{
	DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48-8,5,55,25,3);delay(50);//big box middle
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(50);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(50);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(50);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(50);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(50);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(50);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(50);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(50);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit
    DrawRectangle(39+48,36,1,2,3);// box style middle; 
    HLine(17+48-29+25,6,1,4,'\3');delay(50);
    HLine(17+48-29+25,30,1,4,'\4');delay(50);
    HLine(61+48-21+25,6,1,4,'\4');delay(50);
    HLine(61+48-21+25,30,1,4,'\3');delay(50);
  
}
void HeaderViewBox()
{
    gotoxy(54+12-3,3);foreColor(0);cout << "HERE IS THE SPECIAL MENU IN MY SMALL RESTAURANT ";
    foreColor(4);cout << " \3"; 
    gotoxy(17+51-6,7);foreColor(0);cout << left << setw(10) << "BARCODE" << setw(26) << "NAME OF FOOD OR DRINK" << setw(10) << "QUANTITY"  <<"PRICE" <<"\n"<< endl;  
}
void InsertBox()
{
    //  VLine(40+35+13,6,23,8,'|');delay(300);
    DrawRectangle(30+13,1,90,2,3);
    drawBoxSingleLineWithBG(20+48,5,39,25,3);delay(50);//big box middle
    drawBoxSingleLineWithBG(16+48,5,2,1,4);delay(50);// very small red box left  above
    drawBoxSingleLineWithBG(61+48,5,2,1,4);delay(50);// very small red box right above
    drawBoxSingleLineWithBG(16+48,29,2,1,4);delay(50);// very small red box left below
    drawBoxSingleLineWithBG(61+48,29,2,1,4);delay(50);// very small red box right below
    drawBoxSingleLineWithBG(12+48,5,2,10,6);delay(50);// yellow above left
    drawBoxSingleLineWithBG(65+48,5,2,10,6);delay(50);// yellow above right
    // real
    drawBoxSingleLineWithBG(12+48,20,2,10,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,20,2,10,6);delay(50);// yellow below right
    // fake
    drawBoxSingleLineWithBG(12+48,35,2,7,6);delay(50);// yelllow below left
    drawBoxSingleLineWithBG(65+48,35,2,7,6);delay(50);// yellow below right
    DrawRectangle(8+48,6,2,35,5);delay(50);// purple left side
    DrawRectangle(69+48,6,2,35,5);delay(50);// purple right side
    DrawRectangle(5+48,7,2,33,9);delay(50);// blue left side
    DrawRectangle(72+48,7,2,33,9);delay(50);// blue right side
    DrawRectangle(2+48,8,2,31,3);delay(50);// similar white left
    DrawRectangle(75+48,8,2,31,3);delay(50);// similar white right
    DrawRectangle(13+48,32,53,2,3);delay(50);// similar white below
    DrawRectangle(16+48,36,6,1,3);// box back;
    DrawRectangle(57+48,36,6,1,3);// box exit
    DrawRectangle(39+48,36,1,2,3);// box style middle; 
    HLine(17+48,6,1,4,'\3');delay(50);
    HLine(17+48,30,1,4,'\4');delay(50);
    HLine(61+48,6,1,4,'\4');delay(50);
    HLine(61+48,30,1,4,'\3');delay(50); 
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
void InfoD()
{
    gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    DrawRectangle(17+52,11,37,1,0);
    gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: ";
    gotoxy(17+51+14,15);foreColor(0);cout << "YOUR NAME";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "ENTER HERE: ";
    gotoxy(17+51+16,20);cout << "ADDRESS";
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout << "ENTER HERE: ";
    gotoxy(17+51+14,25);cout << "PHONE NUMBER";
    DrawRectangle(17+52,26,37,1,0);
    gotoxy(17+52,27);cout << "ENTER HERE: ";
    // caption
    gotoxy(54+23,3);EPN("COMPLETE YOUR IDENTIFY");
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
void OrderD()
{
	gotoxy(10+58,8);foreColor(0);cout << "ORDER FOOD OR DRINK BY BARCODE BELOW!!!";
	DrawRectangle(17+52,11,37,1,0);
	gotoxy(17+51+16,10);foreColor(0);cout << "BARCODE";
    
    gotoxy(17+51+16,15);foreColor(0);cout << "COUPON";
    DrawRectangle(17+52,16,37,1,0);
    gotoxy(17+52,17);cout << "ENTER HERE: ";
    
    DrawRectangle(17+52,21,37,1,0);
    gotoxy(17+52,22);cout << "ENTER HERE: ";
    gotoxy(17+51+16,20);cout << "QUANTITY";
    // caption
    gotoxy(54+20,3);EPN("ORDER FOOD OR DRINK BELOW");
    foreColor(4);cout << " \3"; 
    gotoxy(54+14,25);cout << "IF YOU DON'T HAVE COUPON, JUST SKIP IT!";
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
		int  barcodef, qtyf, qtyorder, discount;
		char namef[30], nameff[30], address[50], phone[30], coupon[15];
		float pricef, payment, total, dis;
		
		
	void Inputf()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> barcodef;fflush(stdin);cin.clear();
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(namef, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin >> qtyf;fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin >> pricef;fflush(stdin);cin.clear();
		gotoxy(54+20,30);foreColor(3);cout << ">>>>>INSERT SUCCESSED<<<<<";
		gotoxy(64+3,34);foreColor(0);cout << "PRESS ENRER TO INSERT MORE OR ESC FOR BACK!";		
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
		total = pricef*qtyorder;
		dis = total - (total*discount)/100;
		payment = total - dis;
	    gotoxy(17+52,8);foreColor(0);cout << "BARCODE: " << barcodef;
	    gotoxy(17+52,12);foreColor(0);cout << "NAME: "	 << namef;
	    gotoxy(17+52,16);cout << "QUANTITY: "<< qtyorder;
	    gotoxy(17+52,20);cout << "PRICE: " << pricef << " $";
	    gotoxy(17+52,24);cout << "TOTAL: "<< total<< " $";
	    gotoxy(17+52,28);cout << "PAYMENT: "<< payment<< " $";
	}
	void InputInfo()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cout << barcodef;
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(nameff, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin.getline(address, 50);fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin.getline(phone, 30);fflush(stdin);cin.clear();
	}
	void HeaderInfo()
	{
		gotoxy(17+51-7,7);foreColor(0);cout << left << setw(15) << "ORDER_BARCODE" << setw(14) << "NAME" << setw(12) << "ADDRESS"  <<"PHONE NUMBER" <<"\n"<< endl;
	}
	void InformationO()
	{
		foreColor(0);cout << "     "<< "\t\t\t\t\t\t\t\t" << left<< setw(12) << barcodef << setw(14) << nameff << setw(12) << address << phone << "\n" << endl;
	}
	void Editf()
	{
		gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cout << barcodef;
		gotoxy(17+52,17);foreColor(0);cout << "ENTER HERE: "; cin.getline(namef, 30);fflush(stdin);cin.clear();
		gotoxy(17+52,22);foreColor(0);cout << "ENTER HERE: "; cin >> qtyf;fflush(stdin);cin.clear();
		gotoxy(17+52,27);foreColor(0);cout << "ENTER HERE: "; cin >> pricef;fflush(stdin);cin.clear();
	}
	void Coupon()
	{
    	gotoxy(17+52,17);cout << "ENTER HERE: "; cin.getline(coupon, 15);fflush(stdin);cin.clear();
    	if(strcmp(coupon, "B168")== 0 || strcmp(coupon, "C168")==0 || strcmp(coupon, "D168")==0)
    	{
    		discount = 50;
		}
		else if(strcmp(coupon, "A168")==0)
		{
			discount = 0;
		}
		else
		{
			discount = 100;
		}
	}
 };
fstream file;
FoodClass fc;

void InsertF()
{
	InsertBox();
	InsertD();
	file.open("ihu.bin", ios::out | ios::app);
	fc.Inputf();
	file.write((char*)&fc, sizeof(fc));
	file.close();
}
void ViewF()
{
	ViewBox();
	HeaderViewBox();
	file.open("ihu.bin", ios::in);
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
	gotoxy(54+12-3,34);foreColor(0);cout << "    PRESS ENTER FOR STAY HERE OR ESC FOR BACK";
	file.close();
}
void SearchF()
{
	InsertBox();
	SearchD();
	bool isfoundf = false;
	int searchf;
	file.open("ihu.bin", ios::in);
	if(file.bad())
	{
		system("cls");
		cout << "\nBYE WORLD CAN NOT SEARCH!!!";
	}
	gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : "; cin >> searchf;fflush(stdin);cin.clear();
	file.read((char*)&fc, sizeof(fc));
	while(!file.eof())
	{
		if(searchf == fc.barcodef)
		{
			fc.OutputSearch();
			isfoundf = true;
		}
		file.read((char*)&fc, sizeof(fc));
	}
	if(isfoundf == true)
	{
		gotoxy(64+3,34);foreColor(0);cout << "PRESS ENRER TO SEARCH AGAIN OR ESC FOR BACK";
	}
	else
	{
		gotoxy(5+58,33);foreColor(4);cout <<  "BARCODE NOT FOUND, PRESS ANY KEY TO SEARCH AGAIN!";
		getch();
		system("cls");
		SearchF();
	}
	
}
fstream backup;
void DeleteF()
{
	InsertBox();
	DeleteD();
	int deletef;
	bool isdeletef = false;
	file.open("ihu.bin", ios::in | ios::binary);
	backup.open("Bup.bin", ios::out | ios::app || ios::binary);
	if(file.bad())
	{
		system("cls");
		cout << "\nBYE WORLD CAN NOT DELETE";
	}
	gotoxy(17+52,12);foreColor(0);cout << "BARCODE   : "; cin >> deletef;fflush(stdin);cin.clear();
	file.read((char*)&fc, sizeof(fc));
	while(!file.eof())
	{
		if(deletef == fc.barcodef)
		{
			isdeletef = true;
		}
		if(deletef != fc.barcodef)
		{
			backup.write((char*)&fc, sizeof(fc));
		}
		file.read((char*)&fc, sizeof(fc));
	}
	if(isdeletef == true)
	{
		gotoxy(54+20,30);foreColor(3);cout << ">>>>>DELETE SUCCESSED<<<<<";
		gotoxy(64+3,34);foreColor(0);cout << "PRESS ENRER TO DELETE MORE OR ESC FOR BACK!";
	}
	else
	{
		gotoxy(5+58,33);foreColor(4);cout <<  "BARCODE NOT FOUND, PRESS ANY KEY TO DELETE AGAIN!";
		getch();
		system("cls");
		DeleteF();
	}
	file.close();
	backup.close();
	remove("ihu.bin");
	rename("Bup.bin", "ihu.bin");
	
}
void UpdateF()
{
	InsertBox();
	UpdateD();
	bool isupdatef = false;
	int updatef;
	file.open("ihu.bin", ios::in | ios::out | ios::binary);
	if(file.bad())
	{
		system("cls");
		cout << "\nBYE WORLD CAN NOT UPDATE";
	}
	gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> updatef;fflush(stdin);cin.clear();
	file.read((char*)&fc, sizeof(fc));
	while(!file.eof())
	{
		if(updatef == fc.barcodef)
		{
			fc.Editf();
			file.seekp((int)file.tellg() - sizeof(fc));
			file.write((char*)&fc, sizeof(fc));
			isupdatef = true;
		}
		file.read((char*)&fc, sizeof(fc));
	}
	if(isupdatef == true)
	{
		gotoxy(54+20,30);foreColor(3);cout << ">>>>>UPDATE SUCCESSED<<<<<";
		gotoxy(64+3,34);foreColor(0);cout << "PRESS ENRER TO UPDATE MORE OR ESC FOR BACK!";
	}
	else
	{
		gotoxy(5+58,33);foreColor(4);cout <<  "BARCODE NOT FOUND, PRESS ANY KEY TO UPDATE AGAIN!";
		getch();
		system("cls");
		UpdateF();
	}
}
fstream file1;
void OrderFF()
{
	InsertBox();
	OrderD();
	int orderidf, newqty;
	bool isorderf = false;
	file.open("ihu.bin", ios::in | ios::out | ios::binary);
	file1.open("jiji.bin", ios::out | ios::app | ios::binary);
	if(file.bad())
	{
		system("cls");
		cout << "\nBYE WORLD FILE NOT FOUND!";
	}

	gotoxy(17+52,12);foreColor(0);cout << "ENTER HERE: "; cin >> orderidf;fflush(stdin);cin.clear();
	file.read((char*)&fc, sizeof(fc));
	while(!file.eof())
	{
		if(orderidf == fc.barcodef)
		{
			fc.Coupon();
			gotoxy(17+52,22);cout << "ENTER HERE: "; cin >> newqty;fflush(stdin);cin.clear();
			fc.qtyorder = newqty;
			if(fc.qtyf >= newqty)
			{
				cls();
				InsertBox();
				InfoD();
				fc.InputInfo();		
				fc.qtyf -= newqty;
				int last = file.tellg();
				file.seekp(last - sizeof(fc));
				file.write((char*)&fc,sizeof(fc));
				file1.write((char*)&fc,sizeof(fc));	//new file						
				isorderf=true;
				break;
			}
			if(fc.qtyf < newqty)
			{		
			
				gotoxy(75,33);cout<<"  NOT ENOUGH QUANTITY!!!";
				gotoxy(75,34);cout<<"PRESS ENTER TO INPUT AGAIN";
				getch();
				cls();
				OrderFF();
			}
		}
		file.read((char*)&fc, sizeof(fc));
	}
	if(isorderf == false)
	{
		gotoxy(5+58,33);foreColor(4);cout <<  "BARCODE NOT FOUND, PRESS ANY KEY TO INPUT AGAIN!!";		
		getch();
		cls();
		OrderFF();
	}
	
	file1.close();
	file.close();
}
void ViewFF()
{
	
	ViewBox();
	fc.HeaderInfo();
	file1.open("jiji.bin", ios::in);
	if(file1.bad())
	{
		system("cls");
		cout << "\nBYE WORLD VIEW";
	}
	file1.read((char*)&fc, sizeof(fc));
	while(!file1.eof())
	{
		fc.InformationO();
		file1.read((char*)&fc, sizeof(fc));
	}
	file1.close();
}
class MainFood{
	public:
		int O;
	void MainFoodf()
	{
		cout << "enter option here :" ; cin >> O;
		switch(O)
		{
			case 1:{
				do{
					system("cls");
					InsertF();
				}while(getch()!=27);
				system("cls");
				MainFoodf();
				break;
			}
			case 2:{
					do{
					system("cls");
					ViewF();
				}while(getch()!=27);
				system("cls");
				MainFoodf();
				break;
			}
			case 3:{
				do{
					system("cls");
					SearchF();
				}while(getch()!=27);
				system("cls");
				MainFoodf();
				break;
			}
			case 4:{
				do{
					system("cls");
					DeleteF();
				}while(getch()!=27);
				system("cls");
				MainFoodf();
				break;
			}
			case 5:{
				do{
					system("cls");
					UpdateF();
				}while(getch()!=27);
				system("cls");
				MainFoodf();
				break;
			}
			case 6:{
				
				system("cls");
				OrderFF();
				cls();
				Receipt();
				fc.OutputOrder();
				break;
			}
			case 7:{
				ViewFF();
				break;
			}
		}
	}
};
MainFood m;
int main()
{
	FullScreen();
	//OrderF();
    //InsertF();
    //SearchF();
	m.MainFoodf();

    //ViewF();
    getch();
    return 0;
	
}

  
