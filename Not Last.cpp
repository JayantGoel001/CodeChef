#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n/=10;
    if (n%10==7){
        cout<<"1\n";
    } else{
        cout<<"0\n";
    }
}