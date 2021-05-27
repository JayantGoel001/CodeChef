#include <iostream>
#include <valarray>

#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 1; i <=sqrt(n) ; ++i) {
        if (n%i==0){
            sum+=i;
            if (i!=1 && n/i!=i){
                sum+=n/i;
            }
        }
    }
    if (sum==n){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
}