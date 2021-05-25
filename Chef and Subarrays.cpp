#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            int prod = 1;
            for (int j = i; j < n; ++j) {
                sum+=ar[j];
                prod*=ar[j];
                if (sum==prod){
                    count++;
                }
            }
        }
        cout<<count<<'\n';
    }
}