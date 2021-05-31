#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        cout<<max(a,b)<<" "<<a+b<<"\n";
    }
}