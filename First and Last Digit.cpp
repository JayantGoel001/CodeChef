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
        int last = n%10;
        while (n/10!=0){
            n/=10;
        }
        int first = n%10;
        cout<<first + last<<"\n";
    }
}