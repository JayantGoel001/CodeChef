#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        while (n!=0){
            if (n%10==4){
                count++;
            }
            n/=10;
        }
        cout<<count<<"\n";
    }
}