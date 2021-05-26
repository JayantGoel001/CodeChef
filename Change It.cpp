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
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        map<int,int> mp;
        for (int i = 0; i < n; ++i) {
            if (mp.count(ar[i])==0){
                mp[ar[i]] = 0;
            }
            mp[ar[i]]++;
        }
        int maxi = -1;
        for (auto it:mp) {
            maxi = max(it.second,maxi);
        }
        if (maxi==-1){
            cout<<n-1<<"\n";
        } else {
            cout << n - maxi << "\n";
        }
    }
}