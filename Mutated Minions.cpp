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
        int n,k;
        cin>>n>>k;
        int count = 0;
        int x;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            if ((x+k)%7==0){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}