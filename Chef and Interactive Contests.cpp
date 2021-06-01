#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,r;
    cin>>n>>r;
    for (int i = 0; i < n; ++i) {
        int _;
        cin>>_;
        if (_>=r){
            cout<<"Good boi\n";
        } else{
            cout<<"Bad boi\n";
        }
    }
}