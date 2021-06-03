#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    while(true){
        int n;
        cin>>n;
        if (n==0){
            break;
        }
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        bool found = true;
        for (int i = 0; i < n; ++i) {
            if (i+1 != ar[ar[i]-1]){
                found = false;
                break;
            }
        }
        if (found){
            cout<<"ambiguous";
        } else{
            cout<<"not ambiguous";
        }
        cout<<"\n";
    }
}