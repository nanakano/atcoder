#include <iostream>

using namespace std;

int main(){

  int N, Y;
  cin >> N >> Y;

  int res = 0;
  int a = 0;
  int b = 0;
  int c = 0;

  for (int i=0; i<=N; i++){
    for (int j=0; j<=N; j++){
        int k = N - i - j;
        int sum = 10000 * i + 5000 * j + 1000 * k;
        if (i+j+k == N && sum == Y && 0 <= k) {
          a = i;
          b = j;
          c = k;
          res++;
        }
      if(res != 0) break;
    }
    if(res != 0) break;
  }

  if(res != 0){
    cout << a << " " << b << " " << c << endl;
  }
  else{
    cout << "-1 -1 -1" << endl;
  }

  return 0;
}
