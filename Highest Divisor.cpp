#include <iostream>
#include <valarray>

#define int long long int
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    for (int i = 10; i >=1; --i) {
        if (n%i==0){
            cout<<i<<"\n";
            break;
        }
    }
}