#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        for (int i = 0; i < n-1; ++i) {
            int pos = i;
            for (int j = i+1; j < n; ++j) {
                if (ar[j]< ar[pos]){
                    pos = j;
                }
            }
            int temp = ar[i];
            ar[i] = ar[pos];
            ar[pos] = temp;
            for (int j = 0; j < n; ++j) {
                cout<<ar[j]<<" ";
            }
            cout<<"\n";
        }
    }
}