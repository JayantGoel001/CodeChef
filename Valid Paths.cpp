#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod = pow(10,9)+7;
void calculateNumberOfPairs(vector<vector<ll>> &v,vector<ll> &dp,vector<ll> &total,int current,int p){
    dp[current] = 1;
    total[current] = 1;
    ll sum =0;
    ll count = 0;
    for (int i = 0; i < v[current].size(); ++i) {
        ll currentNode = v[current][i];
        if (currentNode!=p){
            calculateNumberOfPairs(v,dp,total,currentNode,current);
            dp[current] = (dp[current] + 2*dp[currentNode])%mod;
            count++;
            total[current] = (total[current]+ total[currentNode] + dp[currentNode])%mod;
            sum+=dp[currentNode];
        }
    }
    for (int i = 0; i < v[current].size(); ++i) {
        ll currentNode = v[current][i];
        if (currentNode!=p){
            total[current] = (total[current]+dp[currentNode]*((sum-dp[currentNode]+mod)%mod)%mod)%mod;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<ll>> v(n+1);
        vector<ll> dp(n+1),total(n+1);
        for (int i = 0; i < n - 1; ++i) {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        calculateNumberOfPairs(v,dp,total,1,1);
        ll ans = total[1]%mod;
        cout<<ans<<"\n";
    }
}