#include<iostream>
#include"antheaderplusplus.h"
#include<iomanip>
using namespace std;
int main()
{
//	for (int i =1; i<=10; i++)
//	{
//
//		for(int a = 1; a<=10; a++)
//		{
//			
//			if(a%2==0)
//			{
//				foreColor(5);
//			}
//			else{
//				foreColor(6);
//			}
//			cout << a<< "  ";
//		
//		}
//		cout << endl;
//		
//	}


for (int i = 1; i <= 10; i++)
{
    for (int a = 1; a <= 10; a++)
    {
        // Use both row (i) and column (a) to decide color
        if ((i + a) % 2 == 0)
        {
            foreColor(5);  // one color
        }
        else
        {
            foreColor(6);  // another color
        }

        cout << a << "  ";
    }
    cout << endl;
}

}