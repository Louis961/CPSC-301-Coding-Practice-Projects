#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <iomanip>

int monthNum = 0;
int lineCount;
std::string consolMonth;
std::string fname;
std::ifstream report(fname);

void fileName()
{
    std::cout << "Please provide the file name for your report file: ";
    getline(std::cin, fname);
    std::cout << std::endl;

    report.open(fname);

    if (!report)
    {
        std::cout << "Invalid report file. Please try again." << std::endl;
        exit(-1);
    }

    std::cout << "Please provide the number of months to consolidate: ";
    getline(std::cin, consolMonth);
    std::cout << std::endl;

    std::stringstream usrInput(consolMonth);
    usrInput >> monthNum;

    if (monthNum < 1)
    {
        std::cout << "Invalid month amount to be consolidated, please try again." << std::endl;
        exit(-1);
    }
}

void lineCountFunc()
{
    std::string line;

    if (report.is_open())
    {
        while (!report.eof())
        {
            getline(report, line);
            lineCount++;
        }
    }
    report.clear();
    report.seekg(0, std::ios::beg);
}

void consolidation()
{
    std::string monthAmountStr;
    float monthAmount = 0.00;
    float monthTotal = 0.00;
    int counter = 1;
    int sequenceCounter = 0;
    int sequence = lineCount / monthNum;

    while (sequence > sequenceCounter)
    {
        std::cout << "Month ";
        for (int i = 0; i < monthNum; i++)
        {
            getline(report, monthAmountStr);
            std::stringstream usrInput(monthAmountStr);
            usrInput >> monthAmount;
            monthTotal = monthTotal + monthAmount;
            std::cout << counter << " ";
            counter++;
        }
        std::cout << "Sales: $" << std::setprecision(2) << std::fixed << monthTotal << std::endl;
        monthTotal = 0.00;
        sequenceCounter++;
    }
    report.close();
}

int main()
{
    fileName();

    lineCountFunc();

    consolidation();

    return 0;
}
