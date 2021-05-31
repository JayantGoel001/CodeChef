#include<iostream>
#include <algorithm>

#define int long long int
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        sort(ar,ar+n,greater<int>());
        int m = 0;
        int o = 0;
        int sum1 = 0;
        int sum2 = 0;
        int d = 0;
        for (int i = 0; i < n; ++i) {
            if (m<k){
                sum1+=ar[2*i];
                m++;
            }
            if (o<=k){
                if (o<k-1){
                    sum2+=ar[2*i+1];
                }
                if (o==k-1){
                    sum2+=ar[2*i+1] + ar[2*i+2];
                    break;
                }
                o++;
            }
        }
        d= max(sum1,sum2);
        cout<<d<<"\n";
    }
}