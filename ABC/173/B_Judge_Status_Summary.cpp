#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(){
  
  int N;
  cin >> N;
  string S[N];
  for (int i=0; i<N; i++)
    cin >> S[i];

  string ans[4] = {"AC", "WA", "TLE", "RE"};
  int res[4]={0};

  for (int i=0; i<N; i++)
    for (int j=0; j<4; j++)
      if (S[i] == ans[j])
        res[j]++;
  
  cout << "AC x " << res[0] << endl;
  cout << "WA x " << res[1] << endl;
  cout << "TLE x " << res[2] << endl; 
  cout << "RE x " << res[3] << endl; 

  return 0;
}
