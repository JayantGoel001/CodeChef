#include <iostream>
#include <vector>
#include <valarray>

#define ll long long int
using namespace std;
ll GCD(ll a,ll b,const bool *isPrime){
    if (b==0){
        return a;
    }
    return GCD(b,a%b,isPrime);
}
int main(){
    int t;
    cin>>t;
//    int TOT = 4*(int) pow(10,6)+2;
    int TOT = (int) pow(10,6)+1;
    bool isPrime[TOT];
    for (int i = 1; i <=TOT ; ++i) {
        isPrime[i] = true;
    }
    for (int i = 2; i*i <=TOT ; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= TOT; j += i) {
                isPrime[j] = false;
            }
        }
    }
    while (t--){
        int k;
        cin>>k;
//        ll sum = 0;
//        vector<ll> v;
//        for (int i = 1; i <=2*k+1 ; ++i) {
//            v.push_back(k + i*i);
//        }
//        for (long long i : v) {
//            cout<<i<<" ";
//        }
//        cout<<"\n";
//        for (int i = 0; i <v.size()-1; ++i) {
//            sum+=GCD(v[i],v[i+1],isPrime);
//            cout<<GCD(v[i],v[i+1],isPrime)<<" ";
//        }
//        cout<<"\n";
//        cout<<sum<<"\n";
        ll lastNumber = 4*k+1;
        if (isPrime[lastNumber]){
            cout<<lastNumber + (2*k-1)<<"\n";
        } else {
            ll sum = 0;
            for (int i = 1; i <= 2 * k; ++i) {
                if (!isPrime[k + i * i] || !isPrime[2*i+1]) {
                    sum += GCD(k + i * i, 2 * i + 1,isPrime);
                } else {
                    sum += 1;
                }
            }
            cout << sum << "\n";
        }
//            vector<ll> factors;
//            for (int i = 2; i < lastNumber ; ++i) {
//                if (lastNumber%i==0){
//                    factors.push_back(i);
//                }
//            }
//            sum = lastNumber;
//            ll num = 0;
//            for (int i = factors.size()-1; i >=0; i--) {
//                ll x = (2*k-num)/factors[i];
//                sum += factors[i] * x;
//                num+=x;
//                cout<<x<<" "<<factors[i]<<"\n";
//            }
//            cout<<"\n";
//            sum+=(2*k-num-1);
//            cout<<sum<<"\n";
//        }
//        for (int i = 1; i <=2*k ; ++i) {
//            ll diff = 2*i+1;
//
//        }
    }
}