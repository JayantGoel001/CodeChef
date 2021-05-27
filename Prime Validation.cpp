#include <iostream>
#include <valarray>
#define int long long int
using namespace std;
int isPrime(int n){
    for (int i = 2; i <=ceil(sqrt(n)); ++i) {
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int32_t main(){
    int n;
    cin>>n;
    cout<<isPrime(n)<<"\n";
}