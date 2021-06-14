#include<bits/stdc++.h>
#define int unsigned long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    int TOT = 5 * pow(10,6);
    bool isPrime[TOT+1];
    for (int i = 0; i <=TOT; ++i) {
        isPrime[i] = true;
    }
    for (int i = 2; i*i <=TOT; ++i) {
        if (isPrime[i]){
            for (int j = i*i; j <=TOT ; j+=i) {
                isPrime[j] = false;
            }
        }
    }
    isPrime[1] = false;
    int cumSumPrime[TOT+1];
    cumSumPrime[1] = 0;
    for (int i = 2; i <=TOT ; ++i) {
        if (isPrime[i]){
            cumSumPrime[i] = cumSumPrime[i-1] + i;
        } else{
            cumSumPrime[i] = cumSumPrime[i-1] ;
        }
    }
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<cumSumPrime[m] - cumSumPrime[n-1]<<"\n";
    }
}