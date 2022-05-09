#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <set>


using namespace std;


int solve(int M, int K)
{
  //solve the main problem
  string S; 
  cin >> S;
  vector<int> results;

  //can I compute the sum using old reference
  auto mVal = 0;
  for(int i=0; i < S.size(); i++)
  {
    
    auto S1 = S;
    S1.erase(i,1);
    /* cout << S1 << endl; */
    int val = stoi(S1) % K;
    mVal = max(val, mVal);
  }
  return mVal;
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
