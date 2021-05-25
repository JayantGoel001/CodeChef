#include <iostream>
#include <map>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    map<int,int> mp;
    mp[0] = 6;
    mp[1] = 2;
    mp[2] = 5;
    mp[3] = 5;
    mp[4] = 4;
    mp[5] = 5;
    mp[6] = 6;
    mp[7] = 3;
    mp[8] = 7;
    mp[9] = 6;
    while (t--){
        int a,b;
        cin>>a>>b;
        int x = a+b;
        int count = 0;
        while (x!=0){
            count += mp[x%10];
            x/=10;
        }
        cout<<count<<"\n";
    }
}