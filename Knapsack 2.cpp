#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int w[n];
        for (int i = 0; i < n; ++i) {
            cin>>w[i];
        }
        sort(w,w+n);
        int i=0;
        int j=n-1;
        int count = 0;
        while (i<=j){
            if (w[i]+w[j]<=x){
                count++;
                i++;
                j--;
            } else if (w[j]<=x){
                count++;
                j--;
            }
        }
        cout<<count<<"\n";
    }
}