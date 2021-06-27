#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        map<string,int> mp;
        for (int i = 0; i < 3*n; ++i) {
            string str;
            int x;
            cin>>str>>x;
            mp[str]+=x;
        }
        vector<int> v;
        for (const auto& it:mp) {
            v.push_back(it.second);
        }
        sort(v.begin(), v.end());
        for (long long i : v) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}