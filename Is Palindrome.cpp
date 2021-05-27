#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = n;
    int sum = 0;
    while (n!=0){
        sum = sum*10 + n%10;
        n/=10;
    }
    if (num==sum){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
}