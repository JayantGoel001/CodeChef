#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n+1];
        for (int i = 0; i <=n; ++i) {
            ar[i] = 0;
        }
        int count = 0;
        for (int i = 0; i < k; ++i) {
            string str;
            int index;
            cin>>str;
            if (str=="CLICK"){
                cin>>index;
                ar[index] = !ar[index];
                if (ar[index]==0){
                    count--;
                } else{
                    count++;
                }
            } else{
                count = 0;
                for (int j = 0; j <=n; ++j) {
                    ar[j] = 0;
                }
            }
            cout<<count<<"\n";
        }
    }
}