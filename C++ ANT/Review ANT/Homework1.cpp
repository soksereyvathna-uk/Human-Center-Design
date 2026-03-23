#include<iostream>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
using namespace std;
int main()
{
	string company_name, company_location, staff_name;
	char staff_gender;
	double staff_salary;
	int staff_age,staff_id;
	
	
	foreColor(4);
	cout << "\n\n\t\t >>>>> Enter The Information Here <<<<<";
	cout << "\n\n\t\t Enter Company Name: "; getline(cin, company_name);fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Company Location: "; getline(cin, company_location);fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Staff ID: "; cin >> staff_id;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Staff Name: "; getline(cin, staff_name);cin.clear();
	cout << "\n\n\t\t Enter Staff Age: "; cin >> staff_age;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Staff Gender: "; cin >> staff_gender;fflush(stdin);cin.clear();
	cout << "\n\n\t\t Enter Staff Salary: "; cin >> staff_salary;fflush(stdin);cin.clear();
	
	
	foreColor(5);
	cout << "\n\n\t\t >>>>> Here is The Information <<<<<";
	cout << "\n\n\t\t Company Name: " << company_name;
	cout << "\n\n\t\t Company Location: " << company_location;
	cout << "\n\n\t\t Staff ID: " << staff_id;
	cout << "\n\n\t\t Staff Name: " << staff_name;
	cout << "\n\n\t\t Staff Age: " << staff_age;
	cout << "\n\n\t\t Staff Gender: " << staff_gender;
	cout << "\n\n\t\t Staff Salary: " << staff_salary << "$";
	
	getch();
	return 0;
}