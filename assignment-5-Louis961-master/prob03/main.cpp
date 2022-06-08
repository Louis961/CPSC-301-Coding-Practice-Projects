#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string opStr;

int num1 = 0;
int num2 = 0;
int total = 0;
int remainder = 0;

void input() 
{
cout << "Please input the operation (+, -, *, /) or x to exit the program: ";
getline(cin, opStr);

if (opStr == "+"||opStr == "-"||opStr == "*"||opStr == "/"){

std::cout << "\nPlease input the first number: ";
std::cin >> num1;
std::cout << "\nPlease input the second number: ";
std::cin >> num2;
}
else if (opStr == "x"){
exit (0);
}
else {cout << "Input invalid, please exit and try again." << endl;}
}

void compute(){
if (opStr == "+"){
    total = num1+num2;
    cout << "You chose to add: " << num1 << " + " << num2 << " = " << total << endl;
}

else if (opStr == "-"){
    total = num1-num2;
    cout << "You chose to subtract: " << num1 << " - " << num2 << " = " << total << endl;
}

else if (opStr == "*"){
    total = num1*num2;
    cout << "You chose to multiply: " << num1 << " * " << num2 << " = " << total << endl;
}

else if (opStr == "/"){
    total = num1/num2;
    remainder = num1%num2;
    cout << "You chose to divide: " << num1 << " / " << num2 << " = " << total << " and " << remainder << "/" << num2 << endl;
}
}

int main(){
input();
compute();



return 0;
}
