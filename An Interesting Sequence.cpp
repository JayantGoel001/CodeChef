#include <iostream>
#include <set>
#include <valarray>
#include <vector>
#include <map>
#define ll long long int
using namespace std;
ll GCD(ll a,ll b){
    if (b==0){
        return a;
    }
    return GCD(b,a%b);
}
float result(float d,float r,int k){
    return 3+(k-1)*d + 3 * pow(r,k-1);
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int k;
        cin>>k;
        ll sum = 0;
        float d1 = ceil(14.0 + 2*sqrt(3));
        float r1 = ceil(1.0 + 2.0/sqrt(3));
//        float d2 = (14.0 + 2*sqrt(3));
//        float r2 = (1.0 - 2.0/sqrt(3));

        cout<<(result(d1,r1,k));// + result(d2,r2,k))/2.0<<"\n";
    }
}