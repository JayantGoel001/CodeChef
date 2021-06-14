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
        int n,r,g,b;
        cin>>n>>r>>g>>b;
        int x = (r+g+b)/3;
        cout<<min(x, min(n,min(r,b)))<<"\n";
    }
}