#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int unsigned long long int
#define double double_t
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int GCD(int a, int b) {
    return b==0? a : GCD(b,a%b);
}
const int mod = 1000000000 + 7;

int power(int x, int y,int MOD=mod) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x)%MOD, y / 2,MOD)%MOD;
    } else {
        return (x * power((x * x)%MOD, (y - 1) / 2,MOD)%MOD)%MOD;
    }
}
int inverse(int n,int p){
    return power(n,p-2,p);
}
int convert(int n){
    int sum = 0;
    int c = 1;
    while (n!=0){
        sum = sum + (n%2) * c ;
        n/=2;
        c*=10;
    }
    return sum;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int binaryN = convert(n)%(mod - 1);
        binaryN = (2 * binaryN)%(mod - 1);
        cout<<power(2,binaryN);
        cout<<"\n";
    }
}