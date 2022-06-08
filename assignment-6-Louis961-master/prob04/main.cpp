#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <sstream>

using std::cin;

std::string fname;
int donorNum;
std::ifstream donorFile(fname);

void fileName()
{
    std::cout << "Please provide the file name for your donation file: ";
    getline(cin, fname);
    std::cout <<"\n";
}

void fileOpen()
{
    donorFile.open(fname);
    if (!donorFile)
    {
        std::cout << "Invalid donor file!\n";
        exit (-1);
    }
}

void donorOutput()
{
    float donationTotal;
    std::string fileLine;
    getline(donorFile, fileLine);
    std::stringstream lineStream(fileLine);
    lineStream >> donorNum;

    if (donorNum < 1)
    {
        std::cout << "You need at least one donor for your cause to read donation information.\n";
        exit(-1);
    }

    for (int i = 0; i < donorNum; i++)
    {
        float donation = 0;
        getline(donorFile, fileLine);
        std::stringstream lineStream(fileLine);
        lineStream >> donation;

        std::cout <<"Donation " << i+1 << ": $" << std::setprecision(2) << std::fixed << donation << "\n";
        donationTotal = donation + donationTotal;
    }
    
    std::cout << "Total Donation: $" << std::setprecision(2) << std::fixed << donationTotal << std::endl;
}



int main(){

fileName();

fileOpen();

donorOutput();

    return 0;
}