#include <iostream>
#include <valarray>

#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int x;
        cin>>x;
        int count = 0;
        while (x!=0){
            int w = log(x)/log(2);
            w = min(w,(int)11);
            x-= pow(2,w);
            count++;
        }
        cout<<count<<"\n";
    }
}