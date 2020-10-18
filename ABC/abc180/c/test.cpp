#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            if (N/i != i) res.push_back(N/i);
        }
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); ++i) 
      cout << res[i] << endl;
    return;
}

int main() {
    long long N;
    cin >> N;
    enum_divisors(N);
}
