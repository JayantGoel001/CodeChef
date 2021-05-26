#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    int odd = (n*(2*1 + (n-1)*2))/2;
    int even = (n*(2*2 + (n-1)*2))/2;
    cout<<odd<<" "<<even<<"\n";
}