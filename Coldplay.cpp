#include<iostream>
#include <cmath>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        float m,s;
        cin>>m>>s;
        cout<<floor(m/s)<<"\n";
    }
}