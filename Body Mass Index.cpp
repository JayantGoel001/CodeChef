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
        int m,h;
        cin>>m>>h;
        int x = m/(h*h);
        if (x<=18){
            cout<<"1\n";
        } else if (x<=24){
            cout<<"2\n";
        } else if (x<=29){
            cout<<"3\n";
        } else{
            cout<<"4\n";
        }
    }
}