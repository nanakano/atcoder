#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(){
  
  string S,T;
  cin >> S >> T;

  int res=0;
  for (int i=0; i<S.size(); i++)
    if (S[i] != T[i])
      res++;

  cout << res << endl;
  
  return 0;
}
