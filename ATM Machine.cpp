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
        int n,k;
        cin>>n>>k;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        for (int i = 0; i < n; ++i) {
            if (ar[i]<=k){
                k-=ar[i];
                cout<<"1";
            } else{
                cout<<"0";
            }
        }
        cout<<"\n";
    }
}