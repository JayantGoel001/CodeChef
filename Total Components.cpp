#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int MAX = 10000000;

int primeCount[MAX + 1];
void prime(){
    bool prime[MAX + 1];
    for (int i = 0; i < MAX; ++i) {
        prime[i]  = true;
    }

    for (int p = 2; p * p <= MAX; p++) {
        if (prime[p]) {
            for (int i = p * 2; i <= MAX; i += p)
                prime[i] = false;
        }
    }

    primeCount[0] = primeCount[1] = 0;
    for (int p = 2; p <= MAX; p++) {
        primeCount[p] = primeCount[p - 1];
        if (prime[p]) {
            primeCount[p]++;
        }
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin >> t;
    prime();
    while (t--) {
        int n;
        cin>>n;
        if(n==2){
            cout<<"1\n";
        } else if(n==3||n==4){
            cout<<"2\n";
        } else{
            int l = n / 2;
            int ans = primeCount[n] - primeCount[l]+1;
            cout<<ans<<"\n";
        }
    }
}