#include <cstring>
#include <iostream>
#include <vector>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

string fname;
string input;
int contactCounter = 1;
char name[30];
char phnNum[10];

void initContactsFile()
{
    cout << "Please provide the file name for your phone book: ";
    cin >> fname;
}

void inputContact()
{
    std::ofstream contactsFile;
    contactsFile.open (fname);
    cin.getline (name, 30);

do {
    cout << "\nContact " << contactCounter <<
    ": \n" << "Please provide the name: ";
    cin.getline (name, 30);

    cout << "\nPlease provide their number: ";
    cin.getline (phnNum, 10);

    if (strncmp(name, "Done", 4) != 0){
    
    contactsFile << name << " " << phnNum << endl;
    
    contactCounter++;
    }
    }
while (strncmp(name, "Done", 4) != 0);

        cout << "Saving phonebook into " << fname;
        contactsFile.close();
        cout << "\n\nDone!" << endl;
        exit(0);

}

int main()
{
initContactsFile();

inputContact();

    return 0;
}
