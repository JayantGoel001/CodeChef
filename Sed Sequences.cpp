#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
            sum += ar[i];
        }
        if (sum%k==0){
            cout<<"0\n";
        } else{
            cout<<"1\n";
        }
    }
}