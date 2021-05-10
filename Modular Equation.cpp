#include <iostream>
#include <valarray>
#include <vector>
#define ll long long int
using namespace std;
const int MAX = 500001;
vector<ll> factors[MAX];
void calculateFactors(){
    for(int n=1;n<MAX;n++) {
        for (int j = 1; j <= (int) sqrt(n); ++j) {
            if (n % j == 0) {
                factors[n].push_back(j);
                if ((n / j) != j) {
                    factors[n].push_back(n/j);
                }
            }
        }
    }
}
//int spf[MAXN];
//void sieve(){
//    spf[1] = 1;
//    for (int i=2; i<MAXN; i++)
//
//        // marking smallest prime factor for every
//        // number to be itself.
//        spf[i] = i;
//
//    // separately marking spf for every even
//    // number as 2
//    for (int i=4; i<MAXN; i+=2)
//        spf[i] = 2;
//
//    for (int i=3; i*i<MAXN; i++)
//    {
//        // checking if i is prime
//        if (spf[i] == i)
//        {
//            // marking SPF for all numbers divisible by i
//            for (int j=i*i; j<MAXN; j+=i)
//
//                // marking spf[j] if it is not
//                // previously marked
//                if (spf[j]==j)
//                    spf[j] = i;
//        }
//    }
//}

//ll getFactorization(int x,int m,int j){
//    vector<int> ret;
//    while (x != 1)
//    {
//        ret.push_back(spf[x]);
//        x = x / spf[x];
//    }
//    ret.push_back(1);
//    fy
//    cout<<"\n";
//    set<ll> s;
//    for (int i = 0; i < ret.size(); ++i) {
//        if (m%ret[i]==0 && m/ret[i]<m-m%j){
//            s.insert(m/ret[i]);
//        }
//        if (ret[i]<m-m%j){
//            s.insert(ret[i]);
//        }
//    }
//    for(auto it=s.begin();it!=s.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<"\n";
//    return s.size();
//}
//
//ll calculateDivisors(ll A,ll B,int j){
//    ll n = A - B;
//    ll num = 0;
//    for (int i = 1; i <=min((int)sqrt(n),j) ; ++i) {
//        if (n%i==0){
//            if (i<j){
//                num++;
//                cout<<i<<" ";
//            }
//            if ((n/i)!=i && (n/i)<j){
//                num++;
//                cout<<n/i<<" ";
//            }
//        }
//    }
//    cout<<"\n";
//    return num;
//}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
//    sieve();
    calculateFactors();
    int t;
    cin>>t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        ll count = 0;
//        for (int j = 1; j <= min(n,m); ++j) {
//            cout<<j<<"--->";
//            count+= calculateDivisors(m,m%j,j);
//        }
//        if (n>m){
//            count+=(n-m)*m;
//            count+=(n-m)*(n-m-1)/2;
//        }
//        cout<<count<<"\n";
//        count = 0;
        for (int j = 1; j <= min(n,m); ++j) {
            vector<ll> v = factors[m - m % j];
            for (int i = 0; i < v.size(); ++i) {
                if (v[i]<j){
                    count++;
                }
            }
        }
        if (n>m){
            count+=(n-m)*m;
            count+=(n-m)*(n-m-1)/2;
        }
        cout<<count<<"\n";
    }
}