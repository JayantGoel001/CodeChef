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
        sort(ar,ar+n);
        int mini = ar[0];
        int maxi = ar[k-1];
        for (int i = k; i < n; ++i) {
            if (maxi - mini >= ar[i] - ar[i-k+1]){
                maxi = ar[i];
                mini = ar[i-k+1];
            }
        }
        cout<<maxi-mini<<"\n";
    }
}