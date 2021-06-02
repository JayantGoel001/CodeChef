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
        int sumA = 0;
        int maxA = 0;
        int sumB = 0;
        int maxB = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            sumA+=x;
            maxA = max(maxA,x);
        }
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            sumB+=x;
            maxB = max(maxB,x);
        }
        if (sumA-maxA==sumB-maxB){
            cout<<"Draw";
        } else if (sumA-maxA>sumB-maxB){
            cout<<"Bob";
        } else{
            cout<<"Alice";
        }
        cout<<'\n';
    }
}