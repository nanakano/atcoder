#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#define ull unsigned long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define FOR(i, stop) for(int i = 0; i < (stop); i++)
#define PI 3.141592653589793
using namespace std;

int main(){
  
  string n;
  cin >> n;
  
  int sum=0;

  FOR(i,n.size()){
    if(n[i] != '0')
      sum += n[i]; 
  }

  if(sum%9 == 0) yes;
  else no;

  return 0;
}
