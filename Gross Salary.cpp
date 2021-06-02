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
        float n;
        cin>>n;
        if (n>=1500){
            n = n + 500 + 0.98 * n;
        } else{
            n = n + 0.1*n + 0.9 * n;
        }
        cout<<fixed<<setprecision(2)<<n<<"\n";
    }
}