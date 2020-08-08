#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
  
  int N, D;
  cin >> N >> D;
  long long X[N], Y[N];
  for (int i=0; i<N; i++)
    cin >> X[i] >> Y[i];

  int res=0;
  for (int i=0; i<N; i++){
    if (sqrt((X[i]*X[i]) + (Y[i]*Y[i])) <= D){
      res++;
    }
  }

  cout << res << endl;
  
  return 0;
}
