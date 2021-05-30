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
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i+=3) {
        sort(ar+i,ar+i+3,greater<int>());
        if (i<n){
            sum+=ar[i];
        }
        if (i+1<n){
            sum+=ar[i+1];
        }
    }
    cout<<sum<<"\n";
}