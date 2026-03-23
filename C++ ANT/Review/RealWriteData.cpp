#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream WriteData("data_1.txt", ios::app);
	WriteData<< "jj";
}