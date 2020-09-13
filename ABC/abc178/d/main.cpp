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
  
  ll mod = 1000000007;

  int S;
  cin >> S;

  ll ans=0;

  FOR(i,3,S){
    FOR(j,i+1,S){
      if(i+j == S){
        ans++;
      }
    }
    if(i == S-1){
      ans *= 2;
      ans ++;
    }
  }

  ans = ans % mod;

  cout << ans << endl;

  return 0;
}
