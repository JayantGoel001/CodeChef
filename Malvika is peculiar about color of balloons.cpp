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
        string str;
        cin>>str;
        int a = 0;
        int b = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i]=='a'){
                a++;
            } else{
                b++;
            }
        }
        cout<<min(a,b)<<"\n";
    }
}