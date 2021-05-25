#include <iostream>
#include <valarray>

#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int N = 1000;
    int ar[N+1];
    for (int i = 0; i <=N; ++i) {
        ar[i] = 0;
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= i / 2; ++j) {
            ar[i] = ar[i] + pow((i-2*j),2);
        }
    }
    while (t--){
        int n;
        cin>>n;
        cout<<ar[n]<<"\n";
    }
}