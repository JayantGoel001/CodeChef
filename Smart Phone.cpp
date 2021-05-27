#include <iostream>
#include <algorithm>

#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int maxi = -1;
    for (int i = 0; i < n; ++i) {
        maxi = max(maxi,ar[i] * (n-i));
    }
    cout<<maxi<<"\n";
}