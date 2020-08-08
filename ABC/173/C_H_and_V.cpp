#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(){
  
  int H,W,K;
  cin >> H >> W >> K;
  string c[H][W];
  int bit, ans = 0;

  for (int i=0; i<H; i++)
    for (int j=0; j<W; j++){
      cin >> c[i][j];
    }

  for (int i=0; i<H; i++)
    for (int j=0; j<W; j++){
      if (c[i][j] == '#'){
        sharp++;
      }
      if(K < sharp) break;
    }

  
  return 0;
}
