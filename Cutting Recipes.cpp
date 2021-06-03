#include<bits/stdc++.h>
#define int long long int
using namespace std;
int GCD(int a,int b){
    if (b==0){
        return a;
    }
    return GCD(b,a%b);
}
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
        int gcd = ar[0];
        for (int i = 1; i < n; ++i) {
            gcd = GCD(gcd,ar[i]);
        }
        for (int i = 0; i < n; ++i) {
            cout<<ar[i]/gcd<<" ";
        }
        cout<<"\n";
    }
}