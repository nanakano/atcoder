#include <iostream>

using namespace std;

int main(){
  
  int res=0;
  
  int N;
  cin >> N;
  int A[N];

  for (int i=0; i<N; i++)
    cin >> A[i];

  bool not_even = false;

  while (true) {
    for (int i=0; i<N; i++)
      if (A[i] % 2 != 0) not_even = true;
    if (not_even) break;

    for (int i=0; i<N; i++)
      A[i] /= 2;

    res++;
  }

  cout << res << endl;

  return 0;
}
