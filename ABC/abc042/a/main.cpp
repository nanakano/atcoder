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
  
  int a,b,c; cin >> a >> b >> c;

  int ans5 = 0;
  int ans7 = 0;

  if(a == 5) ans5++;
  if(b == 5) ans5++;
  if(c == 5) ans5++;

  if(a == 7) ans7++;
  if(b == 7) ans7++;
  if(c == 7) ans7++;

  if(ans5 == 2 and ans7 == 1) YES;
  else NO;

  return 0;
}
