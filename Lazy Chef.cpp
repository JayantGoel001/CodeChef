#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int x,m,d;
        cin>>x>>m>>d;
        cout<<min(x*m,x+d)<<'\n';
    }
}