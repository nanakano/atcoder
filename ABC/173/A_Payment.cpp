#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main(){
  
  int N;
  cin >> N;

  while (true){
    if (N <= 0){
      cout << abs(N) << endl;
      return 0;
   }
   N -= 1000;
  }

  
  return 0;
}
