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
        int n;
        cin>>n;
        map<int,int> mp;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            mp[x]++;
        }
        for (auto it:mp) {
            for (int i = 0; i < it.second; ++i) {
                cout<<it.first<<" ";
            }
        }
        cout<<"\n";
    }
}