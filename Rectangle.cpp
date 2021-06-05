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
        int ar[4];
        for (int i = 0; i < 4; ++i) {
            cin>>ar[i];
        }
        sort(ar,ar+4);
        if (ar[0]== ar[1] && ar[2] == ar[3]){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}