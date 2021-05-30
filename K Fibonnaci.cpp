#include <iostream>
#include <valarray>

#define int unsigned long long int
using namespace std;
const int MOD = pow(10,9)+7;
int32_t main(){
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int ar[n+1];
    if (n>k) {
        for (int i = 1; i <= k; ++i) {
            ar[i] = 1;
        }
        int kSum = k % MOD;
        for (int i = k + 1; i <= n; ++i) {
            ar[i] = kSum % MOD;
            kSum = (MOD + kSum % MOD + ar[i] % MOD - ar[i - k] % MOD) % MOD;
        }
        cout << ar[n] % MOD << '\n';
    } else{
        cout<<"1\n";
    }
}