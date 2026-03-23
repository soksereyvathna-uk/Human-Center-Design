#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <sys/stat.h>
#include "antheaderplusplus.h"
#include <vector>

using namespace std;

class Stock
{
    private:
        int id;
        int qty;
        char productName[30];
        double price;
    public:
        int getID()
        {
            return id;
        }
        const char * getProductName()
        {
            return productName;
        }
        int getQty()
        {
            return qty;
        }
        int getPrice()
        {
            return price;
        }
        void setID(int id)
        {
            this->id = id;
        }
        void input()
        {
            cout << "Enter product name  : "; cin.getline(productName,sizeof(productName));
            fflush(stdin); cin.clear();
            cout << "Enter product qty   : "; cin >> qty; fflush(stdin); cin.clear();
            cout << "Enter product price : "; cin >> price; fflush(stdin); cin.clear();
        }
        void update()
        {
            cout << "Enter new qty "; cin >> qty; fflush(stdin); cin.clear();
        }
        void output()
        {
            cout << left << setw(10) << id << setw(30) << productName << setw(10) << price << qty << endl;
        }
};

fstream file;
Stock st;
vector<Stock> vtStock;
string dir = "Data";
string fileName = dir + "\\Stock.ant";
string backupFile = dir + "\\backupData.ant";
struct stat sb;

unsigned short x = 10;
unsigned short y = 5;
unsigned char press = ' ';

void writeData()
{
    if(stat(dir.c_str(),&sb) != 0)
    {
        mkdir(dir.c_str());
    }

    int newID;
    fstream autoID(fileName, ios::in | ios::binary);
    while(autoID.read((char*)&st,sizeof(Stock)))
    {
        newID = st.getID();
    }
    autoID.close();
    file.open(fileName, ios::out | ios::app | ios::binary);
    st.setID(newID+1);
    st.input();
    file.write((char*)&st,sizeof(Stock));
    file.close();
}

void readData()
{
    unsigned short y1 = 0;
    file.open(fileName, ios::in | ios::binary);
    
    while (file.read((char*)&st, sizeof(Stock)))
    {
        st.output();
    }
    
    file.close();
}

void searchData()
{
    char searchName[30] = "\0";
    bool isFound = false;
    file.open(fileName, ios::in | ios::binary);
    
    cout << "Enter search : "; cin.getline(searchName,sizeof(searchName)); fflush(stdin); cin.clear();
    while (file.read((char*)&st, sizeof(Stock)))
    {
        if(strcmp(searchName,st.getProductName()) == 0 || atoi(searchName) == st.getID() 
           || atoi(searchName) == st.getQty()) 
        {
            st.output();
            y++;
            isFound = true;
        }
    }
    if(isFound == false)
    {
        cout << "invalid name" << endl;
    }
    else
    {
        cout << "product found" << endl;
    }
    file.close();
}

void updateData()
{
    short y1 = 0;
    char press = ' ';
    bool isInUse = true;
    file.open(fileName,  ios::in | ios::binary);
    if(file.fail())
    {
        cout << "file curropted";
        return;
    }
    if(!file.is_open())
    {
        cout << "File curropted" << endl;
        return;
    }
    while (file.read((char*)&st, sizeof(Stock)))
    {
        vtStock.push_back(st);
    }
    file.close();

    while (isInUse)
    {
        y = 10;
        for(auto i = 0; i < vtStock.size(); i++)
        {
            if(i == y1)
            {
                foreColor(2);
            }
            else
            {
                foreColor(7);
            }
            gotoxy(x,y);
            cout << left << setw(10) << vtStock[i].getID() << setw(30) << vtStock[i].getProductName() << setw(10) << vtStock[i].getPrice() << vtStock[i].getQty() << endl;
            y++;
        }
        press = getch();
        switch (press)
        {
        case 72:
            y1--;
            if (y1 < 0)
            {
                y1 = vtStock.size() - 1;
            }
            break;
        
        case 80:
            y1++;
            if (y1 > vtStock.size() - 1)
            {
                y1 = 0;
            }
            break;
        case 27:
            foreColor(7);
            isInUse = false;
            break;
        case 13:
            // st = vtStock[y1];
            st.input();
            st.setID(vtStock[y1].getID());
            vtStock[y1] = st;
            break;
        }
    }
    file.open(fileName, ios::out | ios::binary | ios::trunc);
    for(const auto& item : vtStock)
    {
        file.write((char*)&item, sizeof(Stock));
    }
    file.close();
    vtStock.clear();
}
void deleteData()
{
    int deleteID;
    file.open(fileName, ios::in | ios::binary);
    fstream backup(backupFile, ios::out | ios::binary);
    if(!file.is_open())
    {
        cout << "file curropted" << endl;
    }
    else 
    {
        cout << "Enter ID "; cin >> deleteID; fflush(stdin); cin.clear();
        while(file.read((char*)&st, sizeof(Stock)))
        {
            if(deleteID != st.getID())
            {
                backup.write((char*)&st, sizeof(Stock));
            }
        }
    }
    file.close();
    backup.close();
    remove(fileName.c_str());
    delay(5000);
    rename(backupFile.c_str(),fileName.c_str()); 
}

int main()
{
    char press;
    while (1)
    {
        system("cls");
        cout << "1. Write Data " << endl;
        cout << "2. Read Data " << endl;
        cout << "3. Search Data " << endl;
        cout << "4. Update Data " << endl;
        cout << "5. delete Data " << endl;
        cout << "6. exit " << endl;

        press = getch();

        switch (press)
        {
        case '1':
            writeData();
            break;
        case '2':
            system("cls");
            readData();
            getch();
            break;
        case '3':
            system("cls");
            searchData();
            getch();
            break;
        case '4':
            system("cls");
            updateData();
            break;
        case '5':
            system("cls");
            deleteData();
            getch();
            break;
        }
    }
    return 0;
}