#include<iostream>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        ll N,x,k;
        cin>>N>>x>>k;
        if (x%k==0 || (x-(N+1)%k)%k==0){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}
