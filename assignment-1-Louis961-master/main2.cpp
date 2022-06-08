#include <cstring>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void get_input(string & w1, string & w2)
{
  cout << "Please input your first word: \n";
  cin >> w1;
  cout << "Please input your second word: \n";
  cin >> w2;
}

bool compare(const string & w1, const string & w2)
{
  bool equal = true;
  if (w1.length() != w2.length())
  {
    return false;
  }
  for (int i = 0; i < w1.length(); i++)
  {
    if (w1[i] != w2[i])
    {
      equal = false;
      return equal;
    }
    else return equal;
  }
}



int main()
{
string word1;
string word2;
bool result;

get_input(word1, word2);

result = compare(word1, word2);
if (result==true)
{
  cout << word1 << " and " << word2 << " are a match!\n";
}
else
{
  cout << word1 << " and " << word2 << " are not a match!\n";
}
  return 0;
}
