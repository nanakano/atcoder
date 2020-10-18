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
  string S;
  cin >> S;

  int ans=0;
  bool a_t = false;
  bool t_a = false;
  bool c_g = false;
  bool g_c = false;
  bool c = false;
  RIP(i,N-1){
    if(S[i] == 'A') a_t = true;
    if(S[i] == 'T') t_a = true;
    if(S[i] == 'C') c_g = true;
    if(S[i] == 'G') g_c = true;
    FOR(j,i+1,N){
      if(S[j] == 'A' && c_g || g_c) {break;}
      if(S[j] == 'T' && c_g || g_c) {break;}
      if(S[j] == 'C' && a_t || t_a) {break;}
      if(S[j] == 'G' && a_t || t_a) {break;}

      if(S[j] == 'A' && t_a && !c) {c = true;}
      if(S[j] == 'T' && a_t && !c) {c = true;}
      if(S[j] == 'C' && g_c && !c) {c = true;}
      if(S[j] == 'G' && c_g && !c) {c = true;}

      if(S[j] == 'A' && a_t && c) {c = false;}
      if(S[j] == 'T' && t_a && c) {c = false;}
      if(S[j] == 'C' && c_g && c) {c = false;}
      if(S[j] == 'G' && g_c && c) {c = false;}

      if(c) ans++;

//    if(S[i] == 'A' && S[i+1] == 'T') ans++;
//    if(S[i] == 'T' && S[i+1] == 'A') ans++;
//    if(S[i] == 'C' && S[i+1] == 'G') ans++;
//    if(S[i] == 'G' && S[i+1] == 'C') ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
