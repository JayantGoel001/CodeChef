#include <iostream>
#include <valarray>

#define ll long long int
using namespace std;
ll calculateDivisors(ll A,ll B,int j){
    ll n = A - B;
    ll num = 0;
    for (int i = 1; i <=min((int)sqrt(n),j) ; ++i) {
        if (n%i==0){
            if (i<j){
                num++;
            }
            if ((n/i)!=i && (n/i)<j){
                num++;
            }
        }
    }
    return num;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        ll count = 0;
        for (int j = 1; j <= min(n,m); ++j) {
            count+=calculateDivisors(m, m % j,j);
        }
        if (n>m){
            count+=(n-m)*m;
            count+=(n-m)*(n-m-1)/2;
        }
        cout<<count<<"\n";
    }
}