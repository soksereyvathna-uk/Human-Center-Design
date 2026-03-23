#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int o1, o2, o3;
	


	cout << "Option1: "; cin >> o1;fflush(stdin);cin.clear();
	switch(o1)
	{
		case 1:{
			cout << "hello o1";
			break;
		}
		case 2:{
				cout << "Option2"; cin >> o2;fflush(stdin);cin.clear();
				switch(o2)
				{
					case 1:{
						cout << "hello";
						break;
					}
					case 2:{
						
						break;
					}
					default:{
						return 0;
						break;
					}
				}
			break;
		}
		case 3:{
			
			break;
		}
		default:{
			return 0;
			break;
		}
	}

	


}