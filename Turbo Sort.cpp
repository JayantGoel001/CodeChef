#include <iostream>
#include <algorithm>

#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int ar[t];
    for (int i = 0; i < t; ++i) {
        cin>>ar[i];
    }
    sort(ar,ar+t);
    for (int i = 0; i < t; ++i) {
        cout<<ar[i]<<"\n";
    }
}