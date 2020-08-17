#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define loop(i,start, stop) for(int i = start; i < (stop); i++)
using namespace std;

int main(){
  
  string S;
  cin >> S;

  int ans = 0;

  if (S[0] == 'R' && S[1] == 'R' && S[2] == 'R') {cout << 3 << endl;}
  else if (S[0] == 'R' && S[1] == 'R') {cout << 2 << endl;}
  else if (S[1] == 'R' && S[2] == 'R') {cout << 2 << endl;}
  else if (S[0] == 'R' || S[1] == 'R' || S[2] == 'R') {cout << 1 << endl;}
  else {cout << 0 << endl;}

  return 0;
}
