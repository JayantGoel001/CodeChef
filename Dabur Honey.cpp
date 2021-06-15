#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int TOT = pow(10,6);
    int *phi = new int[TOT+1];
    for (int i = 2; i <= TOT; ++i) {
        phi[i] = i;
    }
    for (int i = 2; i <=TOT; ++i) {
        if (phi[i]==i){
            for (int j = i; j <=TOT ; j+=i) {
                phi[j] -= phi[j]/i;
            }
        }
    }
    int t=1;
    cin>>t;
    int i = 1;
    while(t--){
        int a,b;
        cin>>a>>b;
        if (phi[a]>phi[b]){
            cout<<"Case "<<i<<": Shibli took it\n";
        } else{
            cout<<"Case "<<i<<": Swapnil lost it\n";
        }
        i++;
    }
}