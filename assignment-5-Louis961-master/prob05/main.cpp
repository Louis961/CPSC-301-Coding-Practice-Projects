#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int baseNum = 0;
int power = 0;
int newNum = 1;

void input()
{
    cout << "Please enter the base number: ";
    cin >> baseNum; 

    cout << "\nPlease enter the power: ";
    cin >> power;

    if (power < 0)
    {
    cout << "Negative powers are currently unsuppported." << endl;
    exit (0);
    }
}

void computePow(){
    for (int i =0; i < power; i++){
        newNum = baseNum*newNum;
    }
}

void output(){
    cout << baseNum << "^" << power << " = " << newNum << endl;
}

int main(){
input();

computePow();

output();
    
    return 0;
}
