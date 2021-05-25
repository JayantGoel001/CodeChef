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
        int aMin,bMin,cMin,tMin,a,b,c;
        cin>>aMin>>bMin>>cMin>>tMin>>a>>b>>c;
        if (a>=aMin && b>=bMin && c>=cMin && a+b+c >=tMin){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}