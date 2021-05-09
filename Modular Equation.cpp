#include <iostream>
#include <valarray>
#include <vector>
#define ll long long int
using namespace std;
ll* SieveOfEratosthenes(){
    int TOT = 500001;
    bool *prime = new bool[TOT + 1];
    ll *numPrime = new ll[TOT+1];
    for (int i = 1; i <= TOT; ++i) {
        prime[i] = true;
    }
    for (int p = 2; p * p <= TOT; p++){
        if (prime[p]){
            for (int i = p * p; i <= TOT; i += p) {
                prime[i] = false;
            }
        }
    }
    numPrime[1] = 0;
    for (int i = 2; i <= TOT; ++i) {
        if (prime[i]){
            numPrime[i] = numPrime[i-1]+1;
        } else{
            numPrime[i] = numPrime[i-1];
        }
    }
    return numPrime;
}

//
//int spf[MAX];
//void sieve(){
//    spf[1] = 1;
//    for (int i=2; i < MAX; i++){
//        spf[i] = i;
//    }
//    for (int i=4; i < MAX; i+=2) {
//        spf[i] = 2;
//    }
//
//    for (int i=3; i*i < MAX; i++){
//        if (spf[i] == i){
//            for (int j=i*i; j < MAX; j+=i) {
//                if (spf[j] == j) {
//                    spf[j] = i;
//                }
//            }
//        }
//    }
//}

ll calculateDivisors(ll A,ll B,int j){
    ll n = A - B;
    ll num = 0;
    for (int i = 1; i <=min((int)sqrt(n),j) ; ++i) {
        if (n%i==0){
            if (i<j){
                num++;
                cout<<i<<" "<<j<<"\n";
            }
            if ((n/i)!=i && (n/i)<j){
                num++;
                cout<<i<<" "<<j<<"\n";
            }
        }
    }
    return num;
}
//vector<ll> calculateDivisors(ll x,int j){
//    vector<ll> v;
//    while (x!=1){
//        if (spf[x]<=j) {
//            v.push_back(spf[x]);
//        }
//        x/=spf[x];
//    }
//    return v;
//}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll* numPrime = SieveOfEratosthenes();
    int t;
    cin>>t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        ll count = 0;
        for (int i = 1; i <=min(n,m); ++i) {
            count+=numPrime[m-(m%i)];
        }
        cout<<count<<"\n";
//        for (int j = 1; j <= min(n,m); ++j) {
//            vector<ll> v = calculateDivisors(m-m%j,j);
//            for (long long i : v) {
//                cout<<i<<" "<<j<<"\n";
//            }
//            cout<<"\n";
//            count+=v.size();
//        }
//        if (n>m){
//            count+=(n-m)*m;
//            count+=(n-m)*(n-m-1)/2;
//        }
//        cout<<count<<"\n";
        count=0;
        for (int j = 1; j <= min(n,m); ++j) {
            count+= calculateDivisors(m,m%j,j);
        }
        if (n>m){
            count+=(n-m)*m;
            count+=(n-m)*(n-m-1)/2;
        }
        cout<<count<<"\n";
    }
}