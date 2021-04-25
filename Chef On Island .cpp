#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x,y,xr,yr,D;
        cin>>x>>y>>xr>>yr>>D;
        if (x/xr>=D && y/yr>=D){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }

    }
}