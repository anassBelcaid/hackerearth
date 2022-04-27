#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <set>

/* Arpasland has surrounded by attackers. A truck enters the city. The driver claims the load is food and medicine from Iranians. Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege. He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel. Determine if the tag of the truck is valid or not. */

/* We consider the letters "A","E","I","O","U","Y" to be vowels for this problem. */

using namespace std;

bool check_digits(int digit1, int digit2)
{
  auto parity = ((digit1 + digit2) % 2  );
  return parity == 0;
}

bool isValid(string tag)
{

  set<char> vowels{'A', 'E', 'I', 'O', 'U', 'Y'};

  auto digit1 = tag[0] - '0';
  auto digit2 = tag[1] - '0'; 
  if (!check_digits(digit1, digit2))
    return false;

  if( vowels.find(tag[2]) != vowels.end())
    return false;

  digit1 = tag[3] - '0';
  digit2 = tag[4] - '0';
  auto digit3 = tag[5] - '0';
  if(!check_digits(digit1, digit2))
    return false;
  if(!check_digits(digit2, digit3))
    return false;
  
  digit1 = tag[7] - '0';
  digit2 = tag[8] - '0';
  if(!check_digits(digit1, digit2))
    return false;

  
  return true;
}

int main(int argc, char *argv[])
{
    string tag ; 
    cin >> tag; 

    if(isValid(tag))
      cout << "valid" << endl;
    else
      cout << "invalid" << endl;
}
