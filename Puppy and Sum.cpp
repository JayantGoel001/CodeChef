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
        int d,n;
        cin>>d>>n;
        for (int i = 0; i < d; ++i) {
            n = (n*(n+1))/2;
        }
        cout<<n<<"\n";
    }
}