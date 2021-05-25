#include <iostream>
#include <valarray>

#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        if (n%2==0 || m%2==0){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}