#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            v.push_back(ar[i]);
        }
        for (int i = 0; i < n; ++i) {
            int ele = v[i];
            if (ele!=0) {
                for (int j = i + 1; j < n; ++j) {
                    v[j] = v[j] - ele;
                }
                cout<<n-i<<"\n";
            }
        }
    }
}