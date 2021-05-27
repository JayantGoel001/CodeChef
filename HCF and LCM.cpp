#include <iostream>
#define int long long int
using namespace std;
int HCF(int a,int b){
    if (b==0){
        return a;
    }
    return HCF(b,a%b);
}
int32_t main(){
    int a,b;
    cin>>a>>b;
    int mul = a*b;
    int hcf = HCF(a,b);
    int lcm = mul/hcf;
    cout<<hcf<<" "<<lcm<<"\n";
}