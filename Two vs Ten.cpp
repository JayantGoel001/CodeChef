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
        int x;
        cin>>x;
        if (x%10==0){
            cout<<"0\n";
        } else if(x%5==0){
            cout<<"1\n";
        } else{
            cout<<"-1\n";
        }
    }
}