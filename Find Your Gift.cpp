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
        int x = 0;
        int y = 0;
        for (int i = 0; i < str.length(); ++i) {
            if((str[i]=='L' && str[i-1]!='L') && (str[i]=='L' && str[i-1]!='R') ){
                x-=1;
            }
            else if((str[i]=='R' && str[i-1]!='L') && (str[i]=='R' && str[i-1]!='R')){
                x+=1;
            }
            else if((str[i]=='U' && str[i-1]!='U') && (str[i]=='U' && str[i-1]!='D')){
                y+=1;
            }
            else if((str[i]=='D' && str[i-1]!='U') && (str[i]=='D' && str[i-1]!='D')){
                y-=1;
            }
        }
        cout<<x<<" "<<y<<'\n';
    }
}