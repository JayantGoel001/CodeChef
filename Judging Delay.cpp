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
    map<int,vector<int>> mp;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int key,value;
            cin>>key>>value;
            mp[key].push_back(value);
        }
        int count = 0;
        for(auto it:mp){
            sort(it.second.begin(), it.second.end());
            for (int i = 0; i < it.second.size() - 1; ++i) {
                if (it.second[i+1]-it.second[i]>=5){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
}