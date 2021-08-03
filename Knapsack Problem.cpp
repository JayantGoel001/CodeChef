#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
#define double double_t
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

const int mod = 1000000000 + 7;

int power(int x, int y, int MOD = mod) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2, MOD) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
    }
}

int inverse(int n, int p) {
    return power(n, p - 2, p);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--) {
        int n;
        cin >> n;
        vector<int> initial[3];
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int w,c;
            cin>>w>>c;
            initial[w].push_back(c);
            sum+=w;
        }
        for (int i = 1; i <=2; ++i) {
            sort(initial[i].begin(),  initial[i].end(),greater<int>());
        }

        for (int i = 1; i <=sum; ++i) {
            vector<int> pq[3];
            for (int j = 1; j <=2 ; ++j) {
                pq[j] = initial[j];
            }
            int cost = 0;
            int x = i;
            while (x>=2){
                int costOne = 0;
                if (pq[1].size()>=1){
                    costOne += pq[1][0];
                }
                if (pq[1].size()>=2){
                    costOne += pq[1][1];
                }
                int costTwo = 0;
                if (pq[2].size()>=1){
                    costTwo+=pq[2][0];
                }
                if (costOne>costTwo && (i%2==0 || pq[1].size()>=3)){
                    cost += costOne;
                    if (pq[1].size()>=1){
                        pq[1].erase(pq[1].begin());
                    }
                    if (pq[1].size()>=1){
                        pq[1].erase(pq[1].begin());
                    }
                } else{
                    cost += costTwo;
                    if (pq[2].size()>=1){
                        pq[2].erase(pq[2].begin());
                    }
                }
                x-=2;
            }
            if (x==1){
                if (!pq[1].empty()){
                    cost += pq[1][0];
                    pq[1].erase(pq[1].begin());
                }
            }
            cout<<cost<<" ";
        }
        cout << "\n";
    }
}