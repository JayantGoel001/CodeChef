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
    queue<int> q;

    while(t--){
        int n;
        cin>>n;
        if (n==1){
            int x;
            cin>>x;
            q.push(x);
        }else{
            if (n==3){
                cout<<q.front()<<"\n";
            } else if (n==2){
                q.pop();
            }
        }
    }
}