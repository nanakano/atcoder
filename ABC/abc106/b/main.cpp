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
  
  int N;
  cin >> N;
  
  int ans=0, anss=0;
  FOR(i,1,N+1){
    if(i % 2 != 0){
      FOR(j,1,i+1){
        if(i % j == 0) ans++;
      }
      if(ans == 8) anss++;
    }
    ans=0;
  }

  cout << anss << endl;

  return 0;
}
