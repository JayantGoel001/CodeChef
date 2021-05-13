#include <iostream>
#include <valarray>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll TOT = 4*pow(10,6)+5;
    ll p[TOT],ar[TOT];
    for (int i = 0; i < TOT; ++i) {
        p[i]= i;
        ar[i] = 0;
    }
    for (int i = 2; i <TOT ; ++i) {
        if (p[i]==i){
            p[i] = i-1;
            for (int j = 2*i; j <TOT; j+=i) {
                p[j] = (p[j]/i)*(i-1);
            }
        }
    }
    for (int i = 1; i <TOT ; ++i) {
        ar[i]+=i-1;
        for (int j = 2*i; j <TOT ; j+=i) {
            ar[j] += i*((1+p[j/i])/2);
        }
    }
    int t;
    cin>>t;
    while (t--){
        int k;
        cin>>k;
        cout<<ar[4*k+1]<<"\n";
    }
}