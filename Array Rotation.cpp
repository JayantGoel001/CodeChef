#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    ll xq;
    ll mod = (ll)pow(10,9)+7;
    ll sum = (ll)0;
    for (int i = 0; i < n; ++i) {
        cin>>xq;
        sum= (sum+xq +mod)%mod;
    }
    int q;
    cin>>q;
    int x;
    for (int i = 0; i < q; ++i) {
        cin>>x;
        sum = (sum + sum)%mod;
        cout<<sum<<"\n";
    }
}