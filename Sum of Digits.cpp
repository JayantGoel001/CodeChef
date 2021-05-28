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
        int n;
        cin>>n;
        int sum = 0;
        while (n!=0){
            sum+=n%10;
            n/=10;
        }
        cout<<sum<<"\n";
    }
}