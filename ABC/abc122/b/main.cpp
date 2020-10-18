#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define ull unsigned long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define FOR(i,start,stop)  for(int i=(start); i < (stop); i++)
#define FORD(i,start,stop) for(int i=(start); i >= (stop); i--)
#define RIP(i,stop) FOR(i,0,stop)
#define PI 3.141592653589793
#define PRECISION(c,f) fixed << setprecision(c) << f
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  string S;
  cin >> S;

  int buf=0, ans=0;
  RIP(i, S.size()){
    if(S[i] == 'A' or S[i] == 'C' or S[i] == 'G' or S[i] == 'T'){
      buf++;
    } else {
      if(ans < buf) ans = buf;
      buf=0;
    }
  }
  if(ans < buf) ans = buf;

  cout << ans << endl;

  return 0;
}
