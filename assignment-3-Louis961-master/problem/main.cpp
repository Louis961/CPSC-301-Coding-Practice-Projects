#include <cmath>
#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void get_input(float &cost_, float &tip_)
{
  cout << "Please input meal cost: ";
  cin >> cost_;
  cout << "Please input tip percentage: ";
  cin >> tip_;
}

int main() {
  const float tax = 0.075;
  const float percentConv = 0.01;
  float cost = 0.00, tip =0, total = 0.00, subtotal = 0, taxTotal = 0,
  tipTotal=0;

  get_input(cost, tip);

  taxTotal = tax*cost;
  tipTotal = tip*percentConv*cost;
  total = taxTotal + tipTotal + cost;

  cout.setf(std::ios::fixed, std::ios::floatfield);
  cout.precision(2);
  cout << "\nRestaurant Bill\n====================\nSubtotal: $" << cost << endl;
  cout << "Taxes: $" << taxTotal << endl;
  cout << "Tip: $" << tipTotal << endl;
  cout << "====================\nTotal: $" << total << endl;

  return 0;
}
