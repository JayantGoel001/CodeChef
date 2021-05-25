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
        int n,x;
        cin>>n>>x;
        int maxi = -1;
        for (int i = 0; i < n; ++i) {
            int s,r;
            cin>>s>>r;
            if (s<=x){
                maxi = max(maxi,r);
            }
        }
        cout<<maxi<<"\n";
    }
}