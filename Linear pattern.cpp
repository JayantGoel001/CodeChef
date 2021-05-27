#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k1 = 10;
    int k2 = 2;
    for (int i = 0; i < n; ++i) {
        if (i%2==0){
            cout<<k1<<" ";
            k1+=10;
        } else{
            cout<<k2<<" ";
            k2+=2;
        }
    }
}