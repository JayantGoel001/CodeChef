#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    while(t--){
        int L,B;
        cin>>L>>B;
        if (L*B == 2*(L+B)){
            cout<<"Eq\n"<<L*B;
        } else if (L*B > 2*(L+B)){
            cout<<"Area\n"<<L*B;
        } else{
            cout<<"Peri\n"<<2*(L+B);
        }
    }
}