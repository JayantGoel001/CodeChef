#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
bool cmp(pair<int,int> p1,pair<int,int> p2){
    return (p1.first^p1.second)-p1.first > (p2.first^p2.second)-p2.first;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>b[i];
        }
        pair<int,int> ar[n];
        for (int i = 0; i < n; ++i) {
            ar[i] = make_pair(a[i],b[i]);
        }
        sort(ar,ar+n,cmp);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (i<k){
                sum+=(ar[i].first ^ ar[i].second);
            } else {
                sum += ar[i].first;
            }
        }
        cout<<sum<<"\n";
    }
}