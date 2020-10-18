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
  
  ll A,B,C,D;
  cin >> A >> B >> C >> D;

  bool ans=false;
  if(A+B == C+D) ans=true;
  else if(A+C == B+D) ans=true;
  else if(A+D == B+C) ans=true;
  else if(B+C == A+D) ans=true;
  else if(B+D == A+C) ans=true;
  else if(C+D == A+B) ans=true;
  else if(A+B+C == D) ans=true;
  else if(A+C+D == B) ans=true;
  else if(A+C+D == C) ans=true;
  else if(B+C+D == A) ans=true;

  if(ans) yes;
  else no;

  return 0;
}
