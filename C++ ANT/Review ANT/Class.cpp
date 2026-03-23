#include<iostream>
#include<fstream>
#include<iomanip>
#include"antheaderplusplus.h"
#include<conio.h>
using namespace std;
class staff{
	public:
		int staff_id;
		char staff_name[30], company[30], position[30];
		float salary;
		char gender;
	///// create method for input value
    void input()
	{
		cout << "Input Staff id       : ";cin >> staff_id;fflush(stdin);cin.clear();
		cout << "Input Staff Name     : ";cin.getline(staff_name,30);fflush(stdin);cin.clear();
		cout << "Input Staff Gender   : ";cin >> gender;fflush(stdin);cin.clear();
		cout << "Input Staff Salary   : ";cin >> salary;fflush(stdin);cin.clear();
		cout << "Input Staff Position : ";cin.getline(position,30);fflush(stdin);cin.clear();
		cout << "Input Staff Company  : ";cin.getline(company,30);fflush(stdin);cin.clear();
	}
	void edit()
	{
		cout << "Input Staff id       : " << staff_id << endl;
		cout << "Input Staff Name     : ";cin.getline(staff_name,30);fflush(stdin);cin.clear();
		cout << "Input Staff Gender   : ";cin >> gender;fflush(stdin);cin.clear();
		cout << "Input Staff Salary   : ";cin >> salary;fflush(stdin);cin.clear();
		cout << "Input Staff Position : ";cin.getline(position,30);fflush(stdin);cin.clear();
		cout << "Input Staff Company  : ";cin.getline(company,30);fflush(stdin);cin.clear();
	}
	///// create method for show value
	void output()
	{
		cout << left << "\t\t  " << setw(15) << staff_id << setw(15) << staff_name
		<< setw(10) << gender << setw(15) << salary << setw(20) << position << company << endl;
	}
	///// create method for header of data
	void header_output()
	{
		cout << left << "\t\t  " << setw(15) << "STAFF ID" << setw(15) << "STAFF NAME"
		<< setw(10) << "GENDER" << setw(15) << "SALARY" << setw(20) << "POSITION" << "COMPANY" << endl;
		cout << "\t\t  " << "---------------------------------------------------------------------------------" << endl;
	}
};
////////////////// Create function for write data to file ////////////////
fstream sta_file;
staff st; // obj class staff
/// function write data to file
void insert()
{
	sta_file.open("Staff_Data.bin", ios::out | ios::app);
	st.input();  							 // call method input() by obj
	sta_file.write((char*)&st, sizeof(st));  // write value by(obj st) to file
	sta_file.close();                        // close file
}
/// function read data from file
void view()
{
	st.header_output();
	sta_file.open("Staff_Data.bin", ios::in);
	if(sta_file.bad())
	{
		cout << "Warning File not found!";
	}
	if(sta_file.good())
	{
		// first read
		sta_file.read((char*)&st, sizeof(st));      // read value from file to obj st. (first row) 
		while(sta_file.eof() != true)               // loop until the last value of file
		{
			st.output();                            // call method output() for show value
			// secode read
			sta_file.read((char*)&st, sizeof(st));  // read value from file to obj st. (next row)
		}
	}
	sta_file.close();	                             // close file
}
void Search()
{
	sta_file.open("Staff_Data.bin", ios::in);
	if(sta_file.good())
	{
		bool isfound = false;
		int Search_id;
		cout << "\n\t Input ID of Staff Your Want To Search : ";cin >> Search_id;fflush(stdin);cin.clear();
		// first
		sta_file.read((char*)&st, sizeof(st));
		while(!sta_file.eof())
		{
			if(Search_id == st.staff_id)
			{
				st.header_output();
				st.output();
				isfound = true;
			}
			// second read
			sta_file.read((char*)&st, sizeof(st));
		}
		if(isfound == false)
		{
			cout << "\t This ID Of Staff Is Not Found!";
		}
	}
	sta_file.close();
}
fstream backup;
void Delete()
{
	sta_file.open("Staff_Data.bin", ios::in);
	backup.open("BackUp_Data.bin", ios::out | ios::app);
	if(sta_file.good())
	{
		bool isdelete = false;
		string delete_byname;
		cout << "\n\t Input Name Of Staff To Delete : ";cin >> delete_byname;fflush(stdin);cin.clear();
		// first read
		sta_file.read((char*)&st, sizeof(st));
		while(sta_file.eof() != true)
		{
			if(delete_byname == st.staff_name)
			{
				isdelete = true;
			}
			if(delete_byname != st.staff_name)
			{
				backup.write((char*)&st, sizeof(st));  // write to new file(backup)
			}
			// second read
		sta_file.read((char*)&st, sizeof(st));
		}
		if(isdelete == true)
		{
			cout << "\n\t Deleted Is SuccessFull!" << endl;
		}else
		{
			cout << "\n\t This Name Of Staff Is Not Found For Delete!" << endl;
		}
	}
	sta_file.close();
	backup.close();
	remove("Staff_Data.bin");  // delete fiel "Staff_Data.bin"
	rename("BackUp_Data.bin", "Staff_Data.bin"); // rename "BackUp_Data.bin" to "Staff_Data.bin"
}
void Update()
{
	sta_file.open("Staff_Data.bin", ios::in | ios::out);
	if(sta_file.good())
	{
		bool isupdated = false;
		int update_byid;
		cout << "\t Input ID Of Staff To Update : "; cin >> update_byid;fflush(stdin);cin.clear();
		// first read
		sta_file.read((char*)&st, sizeof(st));
		while(sta_file.eof() != true)
		{
			if(update_byid == st.staff_id)
			{
				st.edit();
				sta_file.seekp((int)sta_file.tellg() - sizeof(st));
				sta_file.write((char*)&st, sizeof(st));
				isupdated = true;
			}
			// second read
		sta_file.read((char*)&st, sizeof(st));
		}
		if(isupdated==true)
		{
			cout << "\t Staff Is Update Data SuccessFull!";
		}else
		{
			cout << "\t ID Of Staff Is not Found For update!!!";
		}
	}
	sta_file.close();
}
////// Create Menu
class Menu{
	public:
	int j = 1;
	void EPN(const string &str) 
    {
	    for(int i = 0;i<str.length();i++)
	    {
	    	if(j==14)
	    	{
	    		j = 1;
			}
	      foreColor(j);
	      cout << str[i];delay(200);
	      j++;
	    }
    }
	void Staff()
	{
		gotoxy(45,3);cout << "\4\4\4 Staff Management \4\4\4" ;
		gotoxy(50,5);cout << "[1]. Insert Staff";
		gotoxy(50,6);cout << "[2]. View Staff";
		gotoxy(50,7);cout << "[3]. Search Staff";
		gotoxy(50,8);cout << "[4]. Update Staff";
		gotoxy(50,9);cout << "[5]. Delete Staff";
		gotoxy(50,10);cout << "[6]. Back";
		int op;
		gotoxy(50,12);cout << "INput Option  : "; cin >> op;
		switch(op)
		{
			case 1:
				{
					do{
						cls();
						insert();
						gotoxy(64,30);cout << "\4\4\4 INSERT DATA SUCCESS ! \4\4\4";
						foreColor(1);gotoxy(40,28);cout << "-->> Press [ESC] For Back and Press Any Key to Insert Again <<--";
					}while(getch()!=27);
					cls();
					Staff();
					break;
				}
			case 2:
				{
					cls();
					view();
					foreColor(1);gotoxy(50,28);cout << "-->> Press Any Key Back <<--";
					getch();
					cls();
					Staff();
					break;
				}
			case 3:
				{
					cls();
					Search();
					break;
				}
			case 4:
				{
					cls();
					Update();
					break;
				}
			case 5:
				{
					cls();
					Delete();
					getch();
					cls();
					Staff();
					break;
				}
			case 6:
				{
					cls();
					Mart();
				}default:
					{
						gotoxy(45,14); cout << "\4\4\4 Input Only [1]->[6] \4\4\4";delay(2000);
						cls();
						Staff();
						break;
					}
		}
	}
	void Exit()
	{
		gotoxy(30,3);cout << "   _______   ______     ______    _______     .______   ____    ____  _______  ";
		gotoxy(30,4);cout << "  /  _____| /  __  \\   /  __  \\  |       \\    |   _  \\  \\   \\  /   / |   ____| ";
		gotoxy(30,5);cout << " |  |  __  |  |  |  | |  |  |  | |  .--.  |   |  |_)  |  \\   \\/   /  |  |__    ";
		gotoxy(30,6);cout << " |  | |_ | |  |  |  | |  |  |  | |  |  |  |   |   _  <    \\_    _/   |   __|   ";
		gotoxy(30,7);cout << " |  |__| | |  `--'  | |  `--'  | |  '--'  |   |  |_)  |     |  |     |  |____  ";
		gotoxy(30,8);cout << "  \\______|  \\______/   \\______/  |_______/    |______/      |__|     |_______| ";
        gotoxy(50,12);EPN("--->>> HOPE SEE YOU AGAIN \3\3\3 <<<---");   delay(1000);
		exit(0);                                                  
	}
	//// Main Menu
	void Mart()
	{
		gotoxy(45,3);cout << "\4\4\4 Welcome To Supper Mart \4\4\4" ;
		gotoxy(50,5);cout << "[1]. Manage Staff";
		gotoxy(50,6);cout << "[2]. Manage Product";
		gotoxy(50,7);cout << "[3]. Exit Program";
		int option;
		gotoxy(50,9);cout << "INput Option  : "; cin >> option;
		switch(option)
		{
			case 1:
				{
					cls();
					Staff();
					break;
				}
			case 2:
				{
					cls();
					break;
				}
			case 3:
				{
					cls();
					Exit();
					break;
				}
			default:
			{
				gotoxy(50,11); cout << "\4\4\4 Input Only [1]->[3] \4\4\4";delay(2000);
				cls();
				Mart();
				break;
			}
		}
	}
};
/// Create obj
Menu me;
int main()
{
	me.Mart();
	
//	insert();
//	insert();
//	view();
//	Update();
//	getch();
//	system("cls");
//	view();

//	Delete();
//	view();
	//Search();
	
//// function call test
//	st.input();
//	st.header_output();
//	st.output();
}