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
        int a,b,c,d,K;
        cin>>a>>b>>c>>d>>K;
        int minSteps = abs(c-a) + abs(d-b);
        if (K>=minSteps && (K-minSteps)%2==0){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}