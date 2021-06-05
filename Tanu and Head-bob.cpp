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
        int n;
        cin>>n;
        string str;
        cin>>str;
        int I = 0;
        int N = 0;
        int Y = 0;
        for (int i = 0; i < n; ++i) {
            if (str[i]=='N'){
                N++;
            } else if (str[i]=='I'){
                I++;
            } else{
                Y++;
            }
        }
        if (I>0 && Y==0){
            cout<<"INDIAN\n";
        } else if (Y>0 && I==0){
            cout<<"NOT INDIAN\n";
        } else{
            cout<<"NOT SURE\n";
        }
    }
}