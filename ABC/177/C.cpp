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
  
  ull n; cin >> n;
  ull a[200001];

  RIP(i,n) cin >> a[i];

  ull ans=0;

  FOR(i,0,n-1){
    FOR(j,i+1,n){
      ans += a[i] * a[j];
      ans = ans % 1000000007;
    }
  }

  cout << ans << endl;


  return 0;
}
