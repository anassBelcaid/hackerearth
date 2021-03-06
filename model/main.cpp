#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <set>

/* Arpasland has surrounded by attackers. A truck enters the city. The driver claims the load is food and medicine from Iranians. Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege. He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel. Determine if the tag of the truck is valid or not. */

/* We consider the letters "A","E","I","O","U","Y" to be vowels for this problem. */

using namespace std;

template <class T>
void readVector(vector<T> &vec, int N)
{
  T value;
  for(int i=0; i < N ; i++)
  {
    cin >> value;
    vec.push_back(value);
  }
}

int solve(int M, int K)
{
  //solve the main problem
  return 0;
}


int main(int argc, char *argv[])
{
  unsigned T ;        //number of tests
  cin >> T;

  for(unsigned t = 0; t < T ; t++)
  {
    int M, K;
    cin >> M >> K;
    cout << solve(M, K) << endl;
  }
}
