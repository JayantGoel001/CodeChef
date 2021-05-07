#include <iostream>
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
        for (int i = 1; i <= n; ++i) {
            ll j = m/i;
            if (m%i==0 && m%j==0){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}