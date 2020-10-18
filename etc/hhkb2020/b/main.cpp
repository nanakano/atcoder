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
  
  int H, W;
  int S[100][100]={0};
  cin >> H >> W;

  char ss;
  RIP(i,H){
    RIP(j,W){
      cin >> ss;
      if(ss == '#') S[i][j]=1;
    }
  }

  int ans=0;
  bool c=false;

  RIP(i,H){
    RIP(j,W){
      if(S[i][j] == 0 && !c) c=true;    
      else if(S[i][j] == 0 && c) ans++;    
      if(S[i][j] == 1) c=false;    
    }
    c=false;
  }

  c=false;
  RIP(i,W){
    RIP(j,H){
      if(S[j][i] == 0 && !c) c=true;    
      else if(S[j][i] == 0 && c) ans++;    
      if(S[j][i] == 1) c=false;    
    }
    c=false;
  }

  cout << ans << endl;

  return 0;
}
