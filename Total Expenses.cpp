#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        double quantity,price;
        cin>>quantity>>price;
        double c = 1.0;
        if (quantity>=1000){
            c = 0.90;
        }
        cout<<fixed<<setprecision(6)<<c*quantity*price<<"\n";
    }
}