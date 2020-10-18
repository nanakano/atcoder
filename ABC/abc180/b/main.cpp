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
  
  ll N;
  cin >> N;
  vector<ll> x;
  ll xx;
  RIP(i,N){cin >> xx; x.push_back(xx);}

  ll a=0,c=x[0];
  double b=0;

  RIP(i,N){
    a += abs(x[i]);
    b += abs(x[i])*abs(x[i]);
    if(c < abs(x[i])) c = abs(x[i]);
  }
  b = sqrt(b);

  cout << a << endl;
  cout << PRECISION(15,b) << endl;
  cout << c << endl;

  return 0;
}
