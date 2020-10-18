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
  
  int A, B, K;
  cin >> A >> B >> K;
  
  vector<int> v;

  if(A <= B){
    FOR(i,1,A+1){
      if(A % i == 0 and B % i == 0){
        v.push_back(i);
      }
    }
  }
  if(B < A){
    FOR(i,1,B+1){
      if(A % i == 0 and B % i == 0){
        v.push_back(i);
      }
    }
  }

  cout << v[v.size() - K] << endl;

  return 0;
}
