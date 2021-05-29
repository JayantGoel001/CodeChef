#include <iostream>
#define int unsigned long long int
using namespace std;
int HCF(int a,int b){
    if (b==0){
        return a;
    }
    return HCF(b,a%b);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int mul = a * b;
        int hcf = HCF(a, b);
        int lcm = mul / hcf;
        cout << hcf << " " << lcm << "\n";
    }
}