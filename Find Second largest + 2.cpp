#include <iostream>
#include <algorithm>
#define int long long int
using namespace std;
int32_t main(){
    int ar[3];
    for (int i = 0; i < 3; ++i) {
        cin>>ar[i];
    }
    sort(ar,ar+3);
    cout<<ar[1]<<"\n";
} 
