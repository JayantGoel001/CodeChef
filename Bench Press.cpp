#include <iostream>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        ll n,w,wr;
        cin>>n>>w>>wr;
        ll wt[n];
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin>>wt[i];
            sum+=wt[i];
        }
        if (wr>=w){
            cout<<"YES\n";
        } else{
            if (sum+wr>=w){
                ll requiredSum = w - wr;
                map<ll,ll> mp;
                for (int i = 0; i <n ; ++i) {
                    if(mp.count(wt[i])==0){
                        mp[wt[i]] = 0;
                    }
                    mp[wt[i]]++;
                }
                ll sumNew = 0;
                for(auto it:mp){
                    if (it.second%2==0){
                        sumNew+=it.first*it.second;
                    } else{
                        sumNew+=it.first*(it.second-1);
                    }
                }
                if (requiredSum<=sumNew){
                    cout<<"YES\n";
                } else{
                    cout<<"NO\n";
                }
            } else{
                cout<<"NO\n";
            }
        }
    }
}