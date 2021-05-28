#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count = 0;
    int t,k;
    cin>>t>>k;
    while (t--){
        int n;
        cin>>n;
        if (n%k==0){
            count++;
        }
    }
    cout<<count<<'\n';
}