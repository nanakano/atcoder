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
  ll P;

  ll min_num[300000]={0};
  ll c=0;

  RIP(i,N){
    cin >> P;
    min_num[P]=1;
    if(P <= c){
      FOR(j,c,N){
        if(min_num[j]==0){c=j; break;}
      }
    }
    cout << c << endl;
  }

  return 0;
}
