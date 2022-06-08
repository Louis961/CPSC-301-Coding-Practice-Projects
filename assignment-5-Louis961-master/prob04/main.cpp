#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int loopNum = 0;
double numInput = 0;
int num = 0;

void loop()
{
cout << "Please enter a number: ";
cin >> numInput;
cout << "\nNumber of times to be added: ";
cin >> loopNum;

if (loopNum > 0){

for (int i=0; i < loopNum; i++){
    num=numInput+num;
}
cout << "\nThe sum is " << num << endl;
}

else if (loopNum == 0){
cout << "\nThe number is " << num << endl;
}

else{
cout << "Repetitions can't be negative." << endl;
    exit(0);
}
}

int main(){
loop();


return 0;
}
