#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b || b==c || c==a){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
}