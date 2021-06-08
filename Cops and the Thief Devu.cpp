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
        int m,x,y;
        cin>>m>>x>>y;
        int ar[m];
        for (int i = 0; i < m; ++i) {
            cin>>ar[i];
        }
        int houses[101];
        for (int i = 1; i <= 100; ++i) {
            houses[i] = 0;
        }
        int steps = x*y;
        for (int i = 0; i < m; ++i) {
            for (int l = ar[i]-steps; l <=ar[i]+steps ; ++l) {
                if (l>=1 && l<=100){
                    houses[l] = 1;
                }
            }
        }
        int count = 0;
        for (int i = 1; i <= 100; ++i) {
            count+=houses[i];
        }
        cout<<100-count<<"\n";
    }
}