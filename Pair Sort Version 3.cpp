#include<bits/stdc++.h>
#define int unsigned long long int
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if (a.second==b.second){
        return a.first<b.first;
    } else{
        return a.second>b.second;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    while(t--){
        int n;
        cin>>n;
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
        for (int i = 0; i < n; ++i) {
            cout<<ar[i].first<<" "<<ar[i].second<<" ";
        }
    }
}