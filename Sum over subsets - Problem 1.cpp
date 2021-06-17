#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        for (int i = 0; i < n; ++i) {
            vector<int> v;
            while (n != 0) {
                v.push_back(n % 2);
                n /= 2;
            }
            int sum = ar[0];

        }
    }
}