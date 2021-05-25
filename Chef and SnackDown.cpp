#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        n = n%100;
        if (n==10 || n==15 || n==16 ||n==17 ||n==19){
            cout<<"HOSTED\n";
        } else{
            cout<<"NOT HOSTED\n";
        }
    }
}