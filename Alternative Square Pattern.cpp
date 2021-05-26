#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int k = 1;
    for (int i = 0; i < n; ++i) {
        if (i%2==0){
            for (int j = 0; j < 5; ++j) {
                cout<<k+j<<" ";
            }
            k+=4;
        } else{
            for (int j = 5; j >0; --j) {
                cout<<k+j<<' ';
            }
            k+=6;
        }
        cout<<"\n";
    }
}