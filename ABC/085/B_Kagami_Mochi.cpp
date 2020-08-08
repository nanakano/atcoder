#include <iostream>

using namespace std;

int main(){

  int N;
  cin >> N;
  int d[N];
  for (int i=0; i<N; i++)
    cin >> d[i];

  int res = 0;
  sort (d, d+N);
  int buf = 0;

  for (int i=0; i<N; i++){
    if (buf != d[i]){
      buf = d[i];
      res++;
    }
  }
  
  cout << res << endl;
  
  return 0;
}
