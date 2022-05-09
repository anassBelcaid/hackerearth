#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <set>
#include <bits/stdc++.h>

using cache = std::map<int,int>;  //map values to their initial position
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

int solve(vector<int> T, int l, int q, cache &indices)
{
  l--;
  q--;
  int n = T.size();

  for(int i = n -1; i >= 0; i--)
  {
    auto index = indices[T[i]];

    if(index < l || index >  q)
      return T[i];
  }
  return 0;
}



int main(int argc, char *argv[])
{
  unsigned N, q ;        //number of tests
  cin >> N >> q;
  vector<int> values;
  readVector(values,  N);

  cache indices;
  for(int i=0; i < N; i++)
  {
    indices[values[i]] = i;
  }
  sort(values.begin(), values.end());


  for(unsigned t = 0; t < q ; t++)
  {
    int l, q;
    cin >> l >> q;
    cout << solve(values, l, q, indices) << endl;
  }
}
