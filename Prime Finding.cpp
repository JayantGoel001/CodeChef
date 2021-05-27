#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int TOT = 1000;
    bool isPrime[TOT+1];
    for (int i = 0; i <= TOT; ++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i*i <=TOT ; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= TOT; j += i) {
                isPrime[j]  = false;
            }
        }
    }
    vector<int> prime;
    for (int i = 0; i <=TOT; ++i) {
        if (isPrime[i]){
            prime.push_back(i);
        }
    }
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cout<<prime[i]<<" ";
    }
}