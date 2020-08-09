#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(){
  
  int N,K;
  cin >> N >> K;
  int p[N];
  for (int i=0; i<N; i++)
    cin >> p[i];

  sort(p, p+N);

  int res=0;
  for (int i=0; i<K; i++)
    res += p[i];

  cout << res << endl;
  
  return 0;
}
