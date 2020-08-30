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
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  ll d,t,s;
  cin >> d >> t >> s;

  double ans;
  ans = (double)d / (double)s;

  if (ans <= t) yes;
  else no;

  return 0;
}
