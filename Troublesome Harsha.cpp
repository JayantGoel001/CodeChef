#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int MOD = pow(10,9) + 7;
        vector<int> factors;
        for (int i = 1; i <=sqrt(n); ++i) {
            if (n%i==0){
                factors.push_back(i);
                if (i!=n/i && n%(n/i)==0){
                    factors.push_back(n/i);
                }
            }
        }
        int answer = 1;
        for (int i = 0; i < factors.size(); ++i) {
            answer = (answer * (factors[i] + 1))%MOD;
        }
        cout<<answer-1<<"\n";
    }
}