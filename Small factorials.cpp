#include <iostream>
#define int unsigned long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int factorial[101];
    factorial[0] = 1;
    for (int i = 1; i <=100; ++i) {
        factorial[i] = factorial[i-1] * i;
    }
    while (t--){
        int n;
        cin>>n;
        cout<<factorial[n]<<"\n";
    }
}