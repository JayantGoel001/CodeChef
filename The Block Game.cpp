#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int num = n;
        int sum = 0;
        while (n!=0){
            sum = sum*10 + n%10;
            n/=10;
        }
        if (num!=sum){
            cout<<"loses\n";
        } else{
            cout<<"wins\n";
        }
    }
}