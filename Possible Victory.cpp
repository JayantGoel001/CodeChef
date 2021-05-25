#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    int R,O,C;
    cin>>R>>O>>C;
    int ballLeft = (20-O) * 6;
    if (C+6*ballLeft>R){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
}