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
        int maxi = -1;
        int value = -1;
        for (int i = 2; i <= sqrt(n) ; ++i) {
            if (n%i>=maxi){
                maxi = n%i;
                value = i;
            }
            if (n/i!=i && (n/i)%i>=maxi){
                maxi = (n/i)%i;
                value = n/i;
            }
        }
        cout<<value<<"\n";
    }
}