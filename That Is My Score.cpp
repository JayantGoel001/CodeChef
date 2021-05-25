#include <iostream>
#include <valarray>
#include <map>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for (int i = 1; i <= 8; ++i) {
            mp[i] = 0;
        }
        for (int i = 0; i < n; ++i) {
            int x,p;
            cin>>x>>p;
            if (x<=8){
                mp[x] = max(mp[x], p);
            }
        }
        int sum = 0;
        for(auto it:mp){
            sum+=it.second;
        }
        cout<<sum<<'\n';
    }
}