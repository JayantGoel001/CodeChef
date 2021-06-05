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
        int output = 0;
        for (int i = 2; i <= k; ++i) {
            output = max(output,n%i);
        }
        cout<<output<<"\n";
    }
}