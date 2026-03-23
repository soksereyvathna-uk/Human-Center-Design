#include<iostream>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
using namespace std;

class SampleClass{
	
	private:
		int x, y;
	public:
		void Input()
		{
			cout << "\n\n\t\t Enter Your X: "; cin >> x;fflush(stdin);cin.clear();
			cout << "\n\n\t\t Enter Your Y: "; cin >> y;fflush(stdin);cin.clear();
		}
		void Output()
		{
			cout << "\n\n\t\t Your X: "; cin >> x;
			cout << "\n\n\t\t Your Y: "; cin >> y;
		}

};

int main()
{
	
	Input();
	Output();
}