#include<iostream>
#include <algorithm>

#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int ar[5];
        for (int i = 0; i < 5; ++i) {
            cin>>ar[i];
        }
        sort(ar,ar+5);
        cout<<ar[2]<<"\n";
    }
}