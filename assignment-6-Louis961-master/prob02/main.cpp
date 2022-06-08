#include <iostream>
#include <fstream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

char fname[20];
std::ifstream contactsFile(fname);

void filenameInput()
{
    cout << "Please provide the file name for your phone book: ";
    cin.getline(fname, 20);
    cout << "\n";
}

void fileOpen()
{ 
    contactsFile.open(fname);
    if (!contactsFile)
    {
        cout << "Invalid phonebook file!\n";
        exit (-1);
    }
}

void filePrint()
{
    int contactCounter = 1;
    string contactName;
    string fileLine;
    string contactNum;
    int i = 1;

    if (contactsFile.is_open())
    {    
        while (getline(contactsFile, fileLine))
        {
            
            if (i % 2 == 1)
            {
                cout << "Contact " << contactCounter << ": \n";
                contactCounter++; 
                contactName = fileLine;
                cout << "Name: " << contactName << "\n";
            } 
            else
            {
                contactNum = fileLine;
                cout << "Number: " << contactNum << "\n";
                    
            }
            i++;
        }
    }
    contactsFile.close();
}

int main()
{

filenameInput();

fileOpen();

filePrint();
    return 0;
}
