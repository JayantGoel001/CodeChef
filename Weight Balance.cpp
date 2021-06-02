#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int w1,w2,x1,x2,M;
        cin>>w1>>w2>>x1>>x2>>M;
        float xm = (float)(w2-w1)/(float )M;
        if (xm>=x1 && xm<=x2){
            cout<<1<<"\n";
        } else{
            cout<<0<<"\n";
        }
    }
}