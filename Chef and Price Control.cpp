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
        int n,k;
        cin>>n>>k;
        int x;
        int count = 0;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            if (x>k){
                count += abs(x-k);
            }
        }
        cout<<count<<'\n';
    }
}