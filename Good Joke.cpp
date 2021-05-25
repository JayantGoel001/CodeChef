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
        for (int i = 0; i < n; ++i) {
            int x,y;
            cin>>x>>y;
        }
        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            ans^=i;
        }
        cout<<ans<<"\n";
    }
}