#include <iostream>
#include <iomanip>
#include <vector>

std::vector<float> input(std::vector<float>&, int&);

float computeTotal(std::vector<float>&);

void computeDiscount(float&, int&);

std::vector<float> input(std::vector<float> &gamePrices, int &numGames)
{
std::cout << "Please input the number of game(s) you want to purchase: ";
std::cin >> numGames;

if (numGames > 0)
{
    for (int i=0; i < numGames; i++)
        {
        float number = 0.00;
        std::cout << "\nEnter the price of the game " << i+1 << ": $";
        std::cin >> number;
        gamePrices.push_back(number);   //must store input in vector by value, not index like array
        }
}

else
{
std::cout << "You need to purchase at least 1 game. Please rerun the program." << std::endl;
}      //return vector
    
return gamePrices;
}


float computeTotal(std::vector<float> &gamePrices, int &numGames)
{
    float j = 0.00;

for (int i=0; i < numGames; i++){
    j=j+gamePrices.at(i);
//  std::cout << j << std::endl;
}

return j;

}

void computeDiscount(float &total, int &numGames){
if (total >= 60.00){
    float saved = 0.00;
    float disTot = 0.00;

    saved = total*0.20;
    disTot = total*0.80;
    std::cout << "The total cost of " << numGames << " games is $" << std::setprecision(2) << std::fixed << total << '\n';
    std::cout << "The total cost of " << numGames << " games including the discount is $" <<
    std::setprecision(2) << std::fixed << disTot << "\n";
    std::cout << "You saved $" << std::setprecision(2) << std::fixed << saved << std::endl;

}
else {
    std::cout << "Your total must be greater than or equal to $60.00 to be eligible for the discount." << std::endl;
}
}


int main()
{
int numGames = 0;
std::vector<float> gamePrices;
//std::vector<float> gameList;
float total = 0.00;

input(gamePrices, numGames);

/*
// print contents of vector for error checking
for (std::vector<float>::iterator it = gameList.begin(); it != gameList.end(); ++it)
      std::cout << ' ' << *it;
      std::cout << '\n';
*/

total = computeTotal(gamePrices, numGames);

computeDiscount(total, numGames);

return 0;
}
