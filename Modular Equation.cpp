#include <iostream>
#include <valarray>
#include <vector>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        ll count = 0;
        vector<ll> v(n+1,1);
        for (int i = 2; i <=n ; ++i) {
            ll a = m%i;
            count+=v[a];
            for (int j = a; j <= n; j+=i) {
                v[j]++;
            }
        }
        cout<<count<<"\n";
    }
}