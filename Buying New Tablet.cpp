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
        int n,b;
        cin>>n>>b;
        int maxi = -1;
        for (int i = 0; i < n; ++i) {
            int w,h,p;
            cin>>w>>h>>p;
            if (p<=b){
                maxi = max(maxi,w*h);
            }
        }
        if (maxi!=-1){
            cout<<maxi<<"\n";
        } else{
            cout<<"no tablet\n";
        }
    }
}