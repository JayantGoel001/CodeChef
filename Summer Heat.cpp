#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int xa,xb,Xa,Xb;
        cin>>xa>>xb>>Xa>>Xb;
        cout<<Xa/xa + Xb/xb<<'\n';
    }
}