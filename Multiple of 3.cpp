#include <iostream>
#define int unsigned long long int
using namespace std;
const int MOD = 10;
void printResult(int sum){
    if (sum%3==0){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
}
int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int ar[10],pos[10];
        for (int i = 0; i < 10; ++i) {
            ar[i]=-1;
            pos[i] = -1;
        }
        int K,d0,d1;
        cin>>K>>d0>>d1;
        int sum = d0 + d1;
        int i = 2;
        if (K==i){
            printResult(sum);
        } else {
            i++;
            int dn = (d0 + d1) % MOD;
            sum += dn;
            ar[dn] = sum;
            pos[dn] = i;
            while (i!=K) {
                dn = (dn * 2) % MOD;
//                cout<<dn<<" ";
                if (ar[dn] == -1) {
                    sum += dn;
                    ar[dn] = sum;
                    pos[dn] = i++;
                } else {
                    int numb = i - pos[dn];
//                    cout<<numb<<"p ";
                    int x = (K - i) / numb;
//                    cout<<x<<"x ";
                    sum = sum + ((sum - ar[dn] + dn) * x) + dn;
                    i = i + numb * x + 1;
//                    cout<<i<<"i ";
                }
                if (i == K) {
                    break;
                }
            }
            cout<<sum<<"\n";
            printResult(sum);
        }
    }
}