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
float calculateDistance(pair<int,int> p1,pair<int,int> p2){
    return sqrt(power(p1.first - p2.first,2) + power(p1.second - p2.second,2));
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;
        pair<int,int> ar[3];
        for (int i = 0; i < 3; ++i) {
            cin>>ar[i].first>>ar[i].second;
        }
        vector<float> distance;
        for (int i = 0; i < 3; ++i) {
            for (int j = i+1; j < 3; ++j) {
                distance.push_back(calculateDistance(ar[i],ar[j]));
            }
        }
        int count = 0;
        for (int i = 0; i < distance.size(); ++i) {
            if (distance[i]<=d){
                count++;
            }
        }
        if (count>=2){
            cout<<"yes\n";
        } else{
            cout<<"no\n";
        }
    }
}