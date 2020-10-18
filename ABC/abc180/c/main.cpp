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

bool IsPrime(ll num){
  if (num < 2) return false;
  else if (num == 2) return true;
  else if (num % 2 == 0) return false; 

  double sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2){
    if (num % i == 0){
      return false;
    }
  }
  return true;
}

void ans(ll num, ll c){
  if(num % c == 0)
    cout << c << endl;
  if(num == c+1) {
    cout << num << endl;
    return;
  }
  else return ans(num, c+1);
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  ll N;
  cin >> N;

  if(IsPrime(N)){
    cout << 1 << endl;
    cout << N << endl;
    return 0;
 }

  ans(N,1);
//  FOR(i,1,N+1){
//    if(N % i == 0)
//      cout << i << endl;
//  }

  return 0;
}
