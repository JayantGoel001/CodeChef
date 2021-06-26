#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define INF 1000000000000000000
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int x[n*m+1],y[n*m+1];
        for (int i = 0; i < n*m; ++i) {
            cin>>x[i+1]>>y[i+1];
        }
        int left = 1, right = n*m;
        string ans = "Draw";
        int steps=INF;
        while(left<=right){
            int mid = (left+right)/2;
            vector<vector<int>>status(n+5, vector<int>(m+5,0));
            for(int i=1;i<=mid;i++){
                if(i&1){
                    status[x[i]][y[i]]=1;
                }
                else {
                    status[x[i]][y[i]]=2;
                }
            }
            int fn = 0;
            vector<vector<int>> col(n+2, vector<int>(m+2,0));
            for(int i=n;i>=1;i--){
                for(int j=1;j<=m;j++){
                    if(status[i][j]==1){
                        col[i][j]=col[i+1][j]+1;
                    }
                    else {
                        col[i][j]=0;
                    }
                }
            }
            for(int i=n;i>=1;i--){
                for(int j=m;j>=1;j--){
                    if(col[i][j]>=k){
                        col[i][j]=col[i][j+1]+1;
                    }
                    else {
                        col[i][j]=0;
                    }
                    if(col[i][j]>=k){
                        fn=1;
                    }
                }
            }
            col.clear();
            col.resize(n+2, vector<int>(m+2,0));
            for(int i=n;i>=1;i--){
                for(int j=1;j<=m;j++){
                    if(status[i][j]==2){
                        col[i][j]=col[i+1][j]+1;
                    }
                    else {
                        col[i][j]=0;
                    }
                }
            }
            for(int i=n;i>=1;i--){
                for(int j=m;j>=1;j--){
                    if(col[i][j]>=k){
                        col[i][j]=col[i][j+1]+1;
                    }
                    else {
                        col[i][j]=0;
                    }
                    if(col[i][j]>=k){
                        fn=2;
                    }
                }
            }
            if(fn==0){
                left=mid+1;
            }else{
                if(mid<steps){
                    steps=mid;
                    if(fn==1){
                        ans="Alice";
                    }
                    else {
                        ans="Bob";
                    }
                }
                right=mid-1;
            }
        }
        cout<<ans<<"\n";
    }
}