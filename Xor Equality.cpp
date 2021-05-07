#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
ll power(ll x,ll y,ll mod){
    if (y==0){
        return 1;
    }
    if (y%2==0){
        return (power((x*x)%mod,y/2,mod))%mod;
    } else{
        return (x%mod * power((x*x)%mod,(y-1)/2,mod)%mod)%mod;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll mod = (ll)pow(10,9)+7;
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        ll x = power((ll)2,n-1,mod)%mod;
        cout<<x<<"\n";
    }
}