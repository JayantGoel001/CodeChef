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
        int ar[10];
        for (int i = 0; i < 10; ++i) {
            cin>>ar[9-i];
        }
        int k;
        cin>>k;
        for (int i = 0; i < 10; ++i) {
            k = k - ar[i];
            if (k<0 && ar[i]!=0){
                cout<<10 - i<<"\n";
                break;
            }
        }
    }
}