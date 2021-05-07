#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        ll count = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = i+1; j <=n ; ++j) {
                if ((m%i)%j == (m%j)%i){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
}