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
        for (int i = 0; i < n; ++i) {
            int c = 0;
            for (int j = 0; j < n - i - 1; ++j) {
                if (ar[j]>ar[j+1]){
                    int temp = ar[j+1];
                    ar[j+1] = ar[j];
                    ar[j] = temp;
                    c++;
                }
            }
            if (c==0){
                break;
            }
            for (int j = 0; j < n; ++j) {
                cout<<ar[j]<<" ";
            }
            cout<<"\n";
        }
    }
}