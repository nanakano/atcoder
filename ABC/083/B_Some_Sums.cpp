#include <iostream>

using namespace std;

int f(int n){

  int sum = 0;

  while(true){
    sum += n % 10;
    n /= 10;
    if (n == 0) break;
  }

  return sum;
}

int main(){

  int res = 0, sum = 0;
  int N, A, B;
  cin >> N >> A >> B;

  for (int i=A; i<=N; i++){

    sum = f(i);
    
    if (A <= sum && sum <= B) res += i;
  }
  
  cout << res << endl;

  return 0;
}
