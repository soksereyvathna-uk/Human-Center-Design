#include<iostream>
#include<fstream>
#include<iomanip>
#include"antheaderInput.h"
#include"antheaderplusplus.h"

using namespace std;
class Motor{
	public:
		int id=1, qty;
		char model[30],name[30];
		float price;
	//	string ;
		/////
		int new_qty;
		double total_price;
		////////
		int No ;
		char cus_name[30], date[20], phone[30], ID_Card[30];
		char gender;
	void input()
	{
		cout << "Input Motor ID       : " <<  id << endl;
		cout << "Input Motor Model    : "; cin.getline(model,30);fflush(stdin);cin.clear();
		cout << "Input Motor Name     : "; cin.getline(name,30);fflush(stdin);cin.clear();
		cout << "Input Motor Quantity : "; cin >> qty;fflush(stdin);cin.clear();
		cout << "Input Motor Price    : "; cin >> price;fflush(stdin);cin.clear();
	}
	void edit()
	{
		cout << "Input Motor ID       : " << id << endl;
		cout << "Input Motor Model    : "; cin.getline(model,30);fflush(stdin);cin.clear();
		cout << "Input Motor Name     : "; cin.getline(name,30);fflush(stdin);cin.clear();
		cout << "Input Motor Quantity : "; cin >> qty;fflush(stdin);cin.clear();
		cout << "Input Motor Price    : "; cin >> price;fflush(stdin);cin.clear();
	}
	void output()
	{
		cout << left << "\t\t" << setw(10) << id << setw(15) << model << setw(15) << name <<
		setw(10) << qty << "$" <<  price << endl;
		cout << "\t\t" << "-------------------------------------------------------------" << endl;
	}
	void header_his()
	{
		cout << left << "\t\t" << setw(10) << "ID" << setw(15) << "MODEL" << setw(15) << "MOTOR NAME" <<
		setw(10) << "QUANTITY" << "$" << setw(15) <<  "TOTAL PRICE" << "Cus No" << endl;
		cout << "\t\t" << "------------------------------------------------------------------" << endl;
	}
	void output_his()
	{
		cout << left << "\t\t" << setw(10) << id << setw(15) << model << setw(15) << name <<
		setw(10) << new_qty << "$" << setw(15) <<  total_price << No << endl;
		cout << "\t\t" << "------------------------------------------------------------------" << endl;
	}
	void header()
	{
		cout << left << "\t\t" << setw(10) << "ID" << setw(15) << "MODEL" << setw(15) << "NAME" <<
		setw(10) << "QUANTITY" << "PRICE($)" << endl;
		cout << "\t\t" << "-------------------------------------------------------------" << endl;
	}
	/////////// Sale Motor Cycle
	void sale()
	{
		No+=1;
		gotoxy(60,9); cout << "MOTOR TOTAL PRICE: " << "$" << total_price;      fflush(stdin);cin.clear();
		gotoxy(60,11);cout << "Customer No      : "; cin >> No;fflush(stdin);cin.clear();
		total_price = price*new_qty;

		gotoxy(60,10);cout << "--------------------------------------------------------";
//		gotoxy(60,11);cout << "Customer No      : " << No << endl;
		gotoxy(60,12);cout << "Customer Name    : "; cin.getline(cus_name, 30);       fflush(stdin);cin.clear();
		gotoxy(60,13);cout << "Customer Gender  : "; cin >> gender; 		          fflush(stdin);cin.clear();
		gotoxy(60,14);cout << "Customer Phone   : "; cin.getline(phone, 30);          fflush(stdin);cin.clear();
		gotoxy(60,15);cout << "Customer ID Card : "; cin.getline(ID_Card, 30);        fflush(stdin);cin.clear();
		gotoxy(60,16);cout << "Date             : "; cin.getline(date, 20);           fflush(stdin);cin.clear();
		gotoxy(60,17);cout << "--------------------------------------------------------";
		gotoxy(60,18);cout << "--------------------------------------------------------";
	}
	void invoice()
	{
		gotoxy(50,1); cout << "============ CUSTOMER INFORMATION & RECORD ============";
		gotoxy(50,2); cout << "-------------------------------------------------------";
		gotoxy(60,3); cout << "MOTOR ID         : " << id;              
		gotoxy(60,4); cout << "MOTOR MODEL      : " << model;         
		gotoxy(60,5); cout << "MOTOR NAME       : " << name;          
		gotoxy(60,6); cout << "MOTOR QUANTITY   : " << new_qty;     
		gotoxy(60,7); cout << "MOTOR TOTAL PRICE: " << "$" << total_price;   
		gotoxy(60,8);cout << "--------------------------------------------------------";
		gotoxy(60,9);cout << "Customer No      : " << No << endl;
		gotoxy(60,10);cout << "Customer Name    : " << cus_name; 
		gotoxy(60,11);cout << "Customer Gender  : " << gender; 		        
		gotoxy(60,12);cout << "Customer Phone   : " << phone;      
		gotoxy(60,13);cout << "Customer ID Card : " << ID_Card;  
		gotoxy(60,14);cout << "Date             : " << date;      
		gotoxy(50,15);cout << "--------------------------------------------------------";
		gotoxy(50,16);cout << "--------------------------------------------------------";
	}

};
Motor mo;
fstream Mfile;
void Insert()
{
	int last_id;
	Mfile.open("Motor_Data.bin", ios::in | ios::app);
	while(Mfile.read((char*)&mo, sizeof(mo)))
	{
		last_id = mo.id;
	}
	mo.id = last_id + 1;
	Mfile.close();
	Mfile.open("Motor_Data.bin", ios::out | ios::app);
	mo.input();
	Mfile.write((char*)&mo, sizeof(mo));
	Mfile.close();
}
void View()
{
	mo.header();
	Mfile.open("Motor_Data.bin", ios::in);
	if(Mfile.good())
	{
		// first
		Mfile.read((char*)&mo, sizeof(mo));
		while(Mfile.eof() != true)
		{
			mo.output();
			// second
			Mfile.read((char*)&mo, sizeof(mo));
		}
	}
	Mfile.close();
}
void Search()
{
	
	Mfile.open("Motor_Data.bin", ios::in);
	if(Mfile.good())
	{
		bool isFound = false;
		string s_name;
		cout << "\n\n";
		cout << "Input Motor's Name To Search : ";getline(cin, s_name);fflush(stdin);cin.clear();
		// first read
		mo.header();
		Mfile.read((char*)&mo, sizeof(mo));
		while(Mfile.eof() != true)
		{
			if(s_name == mo.name)
			{
//				mo.header();
				mo.output();
				isFound = true;
			}
			// second read
			Mfile.read((char*)&mo, sizeof(mo));
		}
		/// show message
		if(isFound == false)
		{
			gotoxy(60,18);cout << "This Name Is not Found!";
		}
	}
	Mfile.close();
}
//void Update()
//{
//	Mfile.open("Motor_Data.bin", ios::in | ios::out | ios::binary);
//	if(Mfile.fail())
//	{
//		cout << "File Not Found!";
//	}
//	if(Mfile.good())
//	{
//		
//		//cout << "\n";
//		//cls();
//		
//		// first read
//		
//		bool isUpdate = false;
//		int id_update;
//		cout << "Input ID of Motor To update : "; id_update = inputNumber(); fflush(stdin);cin.clear();
//		Mfile.read((char*)&mo, sizeof(mo));
//		while(Mfile.eof() != true)
//		{
//			if(id_update == mo.id)
//			{
//				
//				Mfile.seekp((int)Mfile.tellg() - sizeof(mo));
//				mo.edit();
//				//Mfile.seekp((int)Mfile.tellg() - sizeof(mo));
//				Mfile.write((char*)&mo, sizeof(mo));
//				isUpdate = true;
//			}
//			// second read
//			Mfile.read((char*)&mo, sizeof(mo));
//		}
//		if(isUpdate == false)
//		{
//			gotoxy(50,19);cout << "This id of motor is not found For Updat";
//		}else
//		{
//			gotoxy(50,19);cout << "Update Successfull!" << endl;
//		}
//	}
//	
//	Mfile.close();
//}
fstream New_file;
void Delete()
{
	New_file.open("New_Data.bin", ios::out | ios::app | ios::binary);
	Mfile.open("Motor_Data.bin", ios::in | ios::binary);
	if(Mfile.good())
	{
		int iDelete;
		bool isDelete = false;
		cout << "Input ID You Want To Delete : "; cin >> iDelete;fflush(stdin);cin.clear();
		Mfile.read((char*)&mo, sizeof(mo));
		while(Mfile.eof() != true)
		{
			if(iDelete == mo.id)
			{
				isDelete = true;
			}
			if(iDelete != mo.id)
			{
				New_file.write((char*)&mo, sizeof(mo));
			}	
			Mfile.read((char*)&mo, sizeof(mo));
		}
		if(isDelete == true)
		{
			cout << "Delete is Successfull!";
		}else
		{
			cout << "This id is Not Found!";
		}
	}
	New_file.close();
	Mfile.close();
	remove("Motor_Data.bin");
//	delay(3000);
	rename("New_Data.bin", "Motor_Data.bin");
}
//////////////////////// Sale ///////////////////////
////////////////////////////////////////////////////
fstream msale;

void Sale()
{
	View();
	Mfile.open("Motor_Data.bin",ios::in | ios::out | ios::binary);
	msale.open("Motor_History.bin",ios::in | ios::out | ios::app | ios::binary);
	if(Mfile.good())
	{
		int id_sale, last_qty ;
		bool isSale = false;
		cout << "\n Input ID Of Motor To Sale : ";cin >> id_sale; fflush(stdin);cin.clear();
		// first read
		Mfile.read((char*)&mo, sizeof(mo));
		
		while(Mfile.eof() != true)
		{
			if(id_sale == mo.id)
			{
				h:
				cls();
				gotoxy(60,8); cout << "Input MOTOR QUANTITY You Want: "; cin >> mo.new_qty;     fflush(stdin);cin.clear();
				last_qty = mo.new_qty;
				if(last_qty <= mo.qty)
				{
					mo.sale();			
					mo.qty -= last_qty;
					int last = Mfile.tellg();				
					Mfile.seekp(last - sizeof(mo));
					Mfile.write((char*)&mo, sizeof(mo)); 
					msale.write((char*)&mo, sizeof(mo));
					 // new file
					isSale = true;
				}else
				{
					gotoxy(60,13);cout << " Qauntity is not enough!!!";
					gotoxy(60,14);cout << " Press Input Qty again!\n";
					getch();
					cls();
					goto h;
				}
			}
			
			
			// second read
			Mfile.read((char*)&mo, sizeof(mo));
			
		}		
		
		if(isSale == true)
		{
			gotoxy(60,25);cout << "Your Sale is Completed \3\3\3";
		}
		if(isSale == false)
		{
			gotoxy(60,26);cout << "This id Of Motor is not found!!!";
		}
	}
	Mfile.close();
	msale.close();
}
void history()
{
	mo.header_his();
	msale.open("Motor_History.bin", ios::in | ios::binary);
	if(msale.good())
	{
		msale.read((char*)&mo, sizeof(mo));
		while(msale.eof() != true)
		{
			//mo.output_his();
			mo.output_his();
			msale.read((char*)&mo, sizeof(mo));
		}
	}
	msale.close();
}
///
//Design de;
//void detail()
//{
//	history();
//	msale.open("Motor_History.bin", ios::in | ios::binary);
//	if(msale.good())
//	{
//		int cus_No;
//		bool isFound = false;
//		string honda = "honda",bmw = "bmw", vespa = "vespa", harley = "harley";
//		gotoxy(50,28);cout << "Input Motor Customer No To Show More Detail : ";cin >> cus_No;fflush(stdin);cin.clear();
//		cls();
//		msale.read((char*)&mo, sizeof(mo));
//		while(msale.eof() != true)
//		{
//			if(cus_No == mo.No && ToLower(mo.model) == bmw)// 
//			{
//				mo.invoice();
//				de.bmw();
////				getch();
////				cls();
//				isFound = true;
//			}else if(cus_No == mo.No && ToLower(mo.model) == honda)
//			{
//				mo.invoice();
//				de.Honda_dream();
//				isFound = true; 
//			}else if(cus_No == mo.No && ToLower(mo.model) == vespa)
//			{
//				mo.invoice();
//				de.vespa();
//				isFound = true; 
//			}else if(cus_No == mo.No && ToLower(mo.model) == harley)
//			{
//				mo.invoice();
//				de.Harley();
//				isFound = true; 
//			}
//			msale.read((char*)&mo, sizeof(mo));
//		}
//		if(isFound == false)
//		{
//			gotoxy(55,26);cout << "This MOTOR ID IS NOT FOUND!";
//		}
//	}
//	msale.close();
//}

int main()
{
	int option;
	cout << "\nEnter your option: "; cin >> option;fflush(stdin);cin.clear();
	switch(option)
	{
		case 1:{
			do{
				cls();
				Insert();
			}while(getch()!=27);
			cls();
			main();
			break;
		}
		case 2:{
			do{
				cls();
				View();
			}while(getch()!=27);
			cls();
			main();
			break;
		}
		case 3:{
				do{
				cls();
				Sale();
			}while(getch()!=27);
			cls();
			main();
			break;
		}
//		case 4:{
//				do{
//				cls();
//				
//			}while(getch()!=27);
//			cls();
//			main();
//			break;
//		}
	}
}