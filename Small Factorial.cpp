#include <iostream>
#define int unsigned long long int
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    int factorial[21];
    factorial[0] = 1;
    for (int i = 1; i <=20; ++i) {
        factorial[i] = factorial[i-1] * i;
    }
    while (t--){
        int n;
        cin>>n;
        cout<<factorial[n]<<"\n";
    }
}