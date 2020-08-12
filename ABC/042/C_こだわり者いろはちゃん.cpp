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
  
  int N,K;
  cin >> N >> K;
  int D[K];
  loop(i, 0, K)
    cin >> D[i];

  int baket[10] = {0};
  loop(i, 0, K)
    baket[D[i]] = 1;

  int split[6] = {0};
  loop(i, 0, 6){
    split[i] = N % 10;
    if (N / 10 == 0) break;
    N /= 10;
  }

  reverse(begin(split), end(split));

  int counter=0;
  loop(i, 0, 6){
    if(split[i] != 0) break;
    counter++;
  }

  int ans[6 - counter];
  loop(i, 0, 6 - counter)
    ans[i] = split[i + counter];

  loop(i, 0, 6 - counter){
    if(baket[ans[i]] != 0){
      loop(j, ans[i], 10)
        if(baket[j] == 0)
          ans[i] = j;
    }
  }
 
  loop(i,0,6-counter)
    cout << ans[i];
  cout << endl;

  return 0;
}
