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
        int a,b,c;
        cin>>a>>b>>c;
        if (a==b+c || a+b==c || a+c==b){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}