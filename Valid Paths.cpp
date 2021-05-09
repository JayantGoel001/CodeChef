#include <iostream>
#include <vector>
#include <valarray>
#define ll long long int
using namespace std;
ll calculate(vector<vector<int>> &v,int i,int n,vector<bool> visited,ll mod){
    if (visited[i]){
        return 0;
    }
    ll sum = 1;
    visited[i] = true;
    for(auto it=v[i].begin();it!=v[i].end();it++){
        sum= (sum%mod + calculate(v,*it,n,visited,mod)%mod)%mod;
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll mod = (ll)pow(10,9)+7;
    int t;
    cin>>t;
    while (t--){
        int n;
        ll x;
        cin>>n>>x;
        vector<vector<int>> adj(n);
        vector<bool> visited(n,false);
        for (int i = 0; i < n - 1; ++i) {
            int u,v;
            cin>>u>>v;
            adj[u-1].push_back(v-1);
            adj[v-1].push_back(u-1);
        }
        ll res = calculate(adj,0,n,visited,mod);
        cout<<res<<"\n";
    }
}