#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        int N,M;
        cin>>N>>M;
        int x,y;
        int a,b;
        cin>>x>>y;
        cin>>a>>b;
        int dThief = (N - x) + (M - y);
        int dPolice = (N - a) + (M - b);
        if (dThief<=dPolice){
            if (x+1>=N && y+1>=M){
                cout<<"YES\n";
            }else if (x+1== a || y+1==b){
                cout<<"NO\n";
            } else {
                cout << "YES\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
}