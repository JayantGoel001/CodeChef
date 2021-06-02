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
        int m,k,n;
        cin>>n>>m>>k;
        int a[m],b[k];
        for (int i = 0; i < m; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < k; ++i) {
            cin>>b[i];
        }
        int ar[n+1];
        for (int i = 1; i <= n; ++i) {
            ar[i] = 0;
        }
        for (int i = 0; i < m; ++i) {
            ar[a[i]]--;
        }
        for (int i = 0; i < k; ++i) {
            ar[b[i]]--;
        }
        int countTI = 0;
        int countNTI = 0;
        for (int i = 1; i <= n; ++i) {
            if (ar[i]==0){
                countNTI++;
            } else if (ar[i]==-2){
                countTI++;
            }
        }
        cout<<countTI<<" "<<countNTI<<"\n";
    }
}