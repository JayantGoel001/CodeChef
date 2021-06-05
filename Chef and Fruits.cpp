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
        int n,m,k;
        cin>>n>>m>>k;
        int diff = abs(n-m);
        if (diff<=k){
            cout<<"0\n";
        } else{
            cout<<diff - k<<"\n";
        }
    }
}