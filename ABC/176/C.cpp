#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define FOR(i, stop) for(int i = 0; i < (stop); i++)
#define PI 3.141592653589793
using namespace std;

int main(){
  
  int n;
  cin >> n;
  ll a[n];
  FOR(i,n) cin >> a[i];

  ll ans=0;
  FOR(i,n-1){
    if(a[i] > a[i+1]){
      ans += a[i] - a[i+1]; 
      a[i+1] = a[i];
    }
  }

  cout << ans << endl;

  return 0;
}
