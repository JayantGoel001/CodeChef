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
        map<string, int> mp;
        vector<pair<string,string>> v;
        for (int i = 0; i < n; ++i) {
            string str1,str2;
            cin>>str1>>str2;
            v.push_back(make_pair(str1,str2));
            if (mp.count(str1)==0){
                mp[str1] = 0;
            }
            mp[str1]++;
        }
        for (int i = 0; i < n; ++i) {
            if (mp[v[i].first]>1){
                cout<<v[i].first<<" "<<v[i].second<<'\n';
            } else{
                cout<<v[i].first<<'\n';
            }
        }
    }
}
