#include <iostream>
#include <valarray>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int TOT = pow(10,5)+1;
    int isPrime[TOT+1];
    for (int i = 0; i <=TOT; ++i) {
        isPrime[i] = true;
    }
    for (int i = 2; i*i <=TOT; ++i) {
        if (isPrime[i]){
            for (int j = i*i; j <=TOT ; j+=i) {
                isPrime[j] = false;
            }
        }
    }
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        if (isPrime[n]){
            cout<<"yes\n";
        } else{
            cout<<"no\n";
        }
    }
}