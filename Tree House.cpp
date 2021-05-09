#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long int
using namespace std;
void calculate(vector<ll> *adj,vector<ll> &sub,vector<ll> &val,vector<pair<ll,ll>> &ch,int i,int last=-1){
    for (int j = 0; j < adj[i].size(); ++j) {
        if (adj[i][j]==last){
            continue;
        }
        calculate(adj,sub,val,ch,adj[i][j],i);
    }
    ch.clear();
    for(auto it:adj[i]){
        if (it!=last){
            ch.emplace_back(sub[it],it);
        }
    }
    sort(ch.rbegin(),ch.rend());
    ll count = 1;
    for(auto it=ch.begin();it!=ch.end();it++){
        val[it->second]=count++;
    }
    for(auto x:adj[i]){
        if (x!=last){
            sub[i]+=val[x]*sub[x];
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    ll mod = (ll)pow(10,9)+7;
    while (t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> adj[n],sub,val;
        vector<pair<ll,ll>> ch;
        sub.assign(n,1);
        val.assign(n,0);
        for (int i = 0; i < n - 1; ++i) {
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
        }
        calculate(adj,sub,val,ch,0);
        cout<<sub[0]%mod * x%mod<<"\n";
    }
}