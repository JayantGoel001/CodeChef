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
        map<char,int> mp;
        for (int i = 0; i < str.length(); ++i) {
            mp[str[i]]++;
        }
        bool found = true;
        for (auto it:mp) {
            if (it.second%2!=0){
                found = false;
                cout<<"NO\n";
                break;
            }
        }
        if (found){
            cout<<"YES\n";
        }
    }
}