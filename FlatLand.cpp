#include <iostream>
#include <valarray>

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
        int count = 0;
        while (n!=0){
            int x = floor(sqrt(n));
            n = n - x*x;
            count++;
        }
        cout<<count<<"\n";
    }
}