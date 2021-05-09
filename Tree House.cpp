#include <iostream>
#include <cmath>
#include <map>
#define ll long long int
using namespace std;
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
        map<ll,ll> mp;
        for (int i = 0; i < n - 1; ++i) {
            ll u,v;
            cin>>u>>v;
            if (mp.count(u)==0){
                mp[u] = 0;
            }
            mp[u] = (mp[u]+1)%mod;
        }
        ll sum = x;
        for (int i = 1; i <= n; ++i) {
            ll z = mp[i]%mod;
            ll w = ((z*(z+1))/2);
            sum = (sum + (x * w)%mod)%mod;
        }
        cout<<sum<<"\n";
    }
}