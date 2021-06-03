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
        float hardness,cc,ts;
        cin>>hardness>>cc>>ts;
        if (hardness>50 && cc<0.7 && ts>5600){
            cout<<"10";
        } else if (hardness>50 && cc<0.7){
            cout<<"9";
        } else if (ts>5600 && cc<0.7){
            cout<<"8";
        } else if (hardness>50 && ts>5600){
            cout<<"7";
        } else if (hardness>50 || cc<0.7 || ts>5600){
            cout<<"6";
        } else{
            cout<<"5";
        }
        cout<<"\n";
    }
}