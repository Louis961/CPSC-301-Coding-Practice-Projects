#include <cstring>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
cout << "Please enter a word: ";
string word;

getline(cin, word);

int numChars = word.length();

int stStr = 0;

int endStr = numChars - 1;

int vowelCount = 0;

int consonantCount = 0;

for (int i=0; i < word.length(); i++)
{
    if (word[i] == 'a'||word[i] =='e'||word[i] =='i'||word[i] =='o'||word[i] =='u')
    {
        vowelCount++;
    }
    else
        {
          consonantCount++;
        }
}

cout << "Vowels: " << vowelCount << endl;
cout << "Consonants: " << consonantCount << endl;

return 0;
}
