#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int TOT = pow(10,5);
    int ar[TOT+1];
    ar[0] = 1;
    int MOD = pow(10,9)+7;
    for (int i = 1; i <=TOT ; ++i) {
        ar[i] = (ar[i-1] * 2)%MOD;
    }
    for (int i = 1; i <=TOT ; ++i) {
        for (int j = 2*i; j <=TOT ; j+=i) {
            ar[j] = (ar[j] + MOD - ar[i])%MOD;
        }
    }
    int cumSum[TOT+1];
    cumSum[0] = 0;
    for (int i = 1; i <=TOT ; ++i) {
        cumSum[i] = (cumSum[i-1] + ar[i])%MOD;
    }
    int t=1;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<(cumSum[r] + MOD - cumSum[l-1])%MOD<<"\n";
    }
}