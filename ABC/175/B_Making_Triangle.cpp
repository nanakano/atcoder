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
  
  int N;
  cin >> N;
  ll L[N];
  loop(i,0,N) cin >> L[i];

  int ans=0;
  for(int i=0; i<N; i++)
    for(int j=i+1; j<N; j++){
      if (L[i] != L[j])
        for(int k=j+1; k<N; k++){
        //if(L[i] != L[j] && L[j] != L[j+1] && L[i] != L[j+1])
        if (L[j] != L[k])
          if(L[i] < L[j] < L[k])
        //if (L[i] != L[j] && L[j] != L[k] && L[i] != L[k])
          cout << L[i] << L[j] << L[k] << endl;
  //        ans++;
        }
    }
      
//        cout << L[i] << L[j] << L[j+1] << endl;
        //if(L[i] != L[j] && L[j] != L[j+1])
         // cout << L[j] << L[j] << L[j+1] << endl;
//          if (L[i] + L[j] + L[j+1] != 0)
//            ans++;

  cout << ans << endl;
  return 0;
}
