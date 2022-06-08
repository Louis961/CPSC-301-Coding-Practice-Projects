#include <iostream>
#include <fstream>
#include <iomanip>

int donorNum = 0;
std::string fname;
std::ofstream donorFile(fname);

void donorInput()
{
    std::cout << "Please provide the number of donors: ";
    std::cin >> donorNum;

    if (donorNum < 1)
    {
        std::cout << "You need at least one donor for your cause to save donation information.\n";
        exit(-1);
    }

    std::cout << "\nPlease provide the name of the donations file: ";
    std::cin >> fname;
    std::cout << "\n";
}

void fileOpen()
{
    donorFile.open(fname);
    /*
    if (!donorFile)
    {
        std::cout << "Invalid donations file!\n";
        exit (-1);
    }
    */
}

void inputStorage()
{
    donorFile << donorNum << std::endl;
    
    for (int i = 0; i < donorNum; i++)
    {
        float donationNum = 0;
        std::cout << "Donor " << i+1 << ": ";
        std::cin >> donationNum;

        donorFile << std::setprecision(2) << std::fixed << donationNum << std::endl;
    }

    donorFile.close();

    std::cout << "Thank you for donating!\n";
}

int main(){

donorInput();

fileOpen();

inputStorage();

    return 0;
}
