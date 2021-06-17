#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    stack<int> s;

    while(t--){
        int n;
        cin>>n;
        if (n==1){
            int x;
            cin>>x;
            s.push(x);
        }else{
            if (n==3){
                cout<<s.top()<<"\n";
            } else if (n==2){
                s.pop();
            }
        }
    }
}