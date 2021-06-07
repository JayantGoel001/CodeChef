#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int TOT = 10000;
    bool isPrime[TOT+1];
    for (int i = 0; i <=TOT; ++i) {
        isPrime[i] = true;
    }
    isPrime[1] = false;
    for (int i = 2; i*i <=TOT; ++i) {
        if (isPrime[i]){
            for (int j = i*i; j <=TOT ; j+=i) {
                isPrime[j] = false;
            }
        }
    }
    int t=1;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int sum = x+y;
        while (!isPrime[++sum]){}
        cout<<sum-x-y<<"\n";
    }
}