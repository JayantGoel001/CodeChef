#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        int b= 0;
        map<int,vector<int>> mp;
        mp[0].push_back(-1);
        for (int i = 0; i < n; ++i) {
            b = (b + ar[i])%n;
            mp[b].push_back(i);
            if (mp[b].size()>1) {
                cout << mp[b][1] - mp[b][0] << "\n";
                for (int j = mp[b][0] + 1; j <= mp[b][1]; ++j) {
                    cout << j+1 << " ";
                }
                break;
            }
        }
        cout << "\n";
    }
}