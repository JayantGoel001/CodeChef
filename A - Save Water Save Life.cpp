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
        int H,x,y,c;
        cin>>H>>x>>y>>c;
        if (((y/2) + x)*H<=c){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}