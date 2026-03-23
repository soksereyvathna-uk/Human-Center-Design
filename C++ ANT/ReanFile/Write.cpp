#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream WriteData("ReadMe.txt", ios::out); 
	if(!WriteData)
	{
    cerr << "Error opening file!" << endl;
	}
	WriteData << "UserName Admin: vathxmaehg" << "\nPassWord Admin: 168" << endl;
	WriteData.close();





//	ofstream write("WriteAndRead.txt", ios::out | ios::app);
//	write << "\nJuu" << endl << "Hlll";

//	string msg;
//	fstream read;
//	read.open("WriteAndRead.txt", ios::in);
//	if(!read)
//	{
//		cout << "Bye World!";
//	}
//	else
//	{
//		while(!read.eof())
//		{
//			getline(read, msg);
//			cout << msg << endl;
//		}
//	}
	
	


	
}