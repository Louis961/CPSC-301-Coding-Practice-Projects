/*
Passing array as parameter, used as pointer to memory address. Thus, function call actually modifies
address space and is not only existent locally.

Parameter in main for input_sales() passes array totSales. Function uses this array but calls it sales[].

Function finishes and totSales[] in main now has filled array.

sales_average() then takes totSales as parameter in main and points to its memory address with totTemp[]
in function implementation.
*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

void input_sales(float sales[]);
float sales_average(float totTemp[]);

void input_sales(float sales[]){
for (int i=0; i<12; i++)
    {
    cout << "Month " << i+1 << ": $";
    cin >> sales[i];
    }
}

float sales_average(float totTemp[]){
    float j=0;
    int i = 0;
while (i != 12){
    j = j+totTemp[i];
    i++;
}
return j;
}

int main() {
    float totSales[12];
    float calcSales = 0;

cout << "Annual Sales Report\n===============\nPlease provide the monthly sales for the year.\n\n";

input_sales(totSales);

calcSales = sales_average(totSales);

cout << "Total Sales: $" << calcSales << "\n";
cout << "Average Monthly Sales: $" << std::setprecision(2) << std::fixed << calcSales/12.00;

return 0;
}
