#include<bits/stdc++.h>
#define int long long int
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
        sort(ar,ar+n);
        int median1 = ar[n/2];
        int cost = 0;
        for (int i = 0; i < n; ++i) {
            cost += abs(ar[i]-median1);
        }
        if (n%2==0){
            int median2 = ar[n/2-1];
            int cost2 = 0;
            for (int i = 0; i < n; ++i) {
                cost2 += abs(ar[i]-median2);
            }
            cost = min(cost,cost2);
        }
        cout<<cost<<"\n";
    }
}