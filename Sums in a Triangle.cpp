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
        int ar[n][n];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                ar[i][j] = 0;
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= i; ++j) {
                cin>>ar[i][j];
            }
        }
        for (int i = n-2; i>=0 ; --i) {
            for (int j = 0; j <= i; ++j) {
                ar[i][j] += max(ar[i+1][j],ar[i+1][j+1]);
            }
        }
        cout<<ar[0][0]<<"\n";
    }
}