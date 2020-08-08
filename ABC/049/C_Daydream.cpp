#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  
  string S;
  cin >> S;

  string str[4] = {"dream", "dreamer", "erase", "eraser"};

  reverse(S.begin(), S.end());

  for (int i=0; i<4; i++)
    reverse(str[i].begin(), str[i].end());

  bool can1 = true;
  for (int i=0; i<S.size();){
    bool can2 = false;
    for (int j=0; j<4; j++){
      string strstr = str[j];
      if (S.substr(i, strstr.size()) == strstr){
        can2 = true;
        i += strstr.size();
      }
    }
    if (!can2) {
      can1 = false;
      break;
    }
  }
  
  if (can1) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
