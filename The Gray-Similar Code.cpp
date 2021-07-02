#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int unsigned long long int
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int power(int x, int y, int MOD = INF) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2) % MOD) % MOD;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--) {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        if (n>=130){
            cout<<"YES";
        } else{
            bool found = false;
            for (int i = 0; i < n; ++i) {
                for (int j = i+1; j <n ; ++j) {
                    for (int k = j+1; k <n ; ++k) {
                        for (int l = k+1; l < n; ++l) {
                            if (ar[i]^ar[j]^ar[k]^ar[l]==0){
                                found = true;
                                break;
                            }
                        }
                        if (found){
                            break;
                        }
                    }
                    if (found){
                        break;
                    }
                }
                if (found){
                    break;
                }
            }
            if (!found){
                cout<<"NO";
            } else{
                cout<<"YES";
            }
        }
        cout << "\n";
    }
}