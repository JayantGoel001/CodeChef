#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int price[6];
    price[0] = 100;
    price[1] = 50;
    price[2] = 10;
    price[3] = 5;
    price[4] = 2;
    price[5] = 1;

    while (t--){
        int n;
        cin>>n;
        int count = 0;
        for (int i = 0; i < 6; ++i) {
            int x = n/price[i];
            count = count + x;
            n-=x*price[i];
        }
        cout<<count<<"\n";
    }
}