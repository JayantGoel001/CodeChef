#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,m;
        int x,y;
        cin>>n>>m;
        cin>>x>>y;
        while (n--){
            string str;
            cin>>str;
            map<char,int> mp;
            mp['U'] = 0;
            mp['P'] = 0;
            mp['F'] = 0;
            for (int i = 0; i < m; ++i) {
                mp[str[i]]++;
            }
            if (mp['F']>=x || (mp['F']>=x-1 && mp['P']>=y)){
                cout<<"1";
            } else{
                cout<<"0";
            }
        }
        cout<<"\n";
    }
}