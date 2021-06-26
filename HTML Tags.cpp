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
bool checkFirstTwo(string str){
    return str[0]=='<' && str[1] == '/';
}
bool checkLast(string str){
    return str[str.size()-1]=='>';
}
bool check(string str){
    for (int i = 2; i <str.size()-1 ; ++i) {
        if (!((str[i]>=48 && str[i]<=57) || (str[i]>=97 && str[i]<=122))){
            return false;
        }
    }
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        if (str.size()>3 && checkFirstTwo(str) && checkLast(str) && check(str)){
            cout<<"Success\n";
        } else{
            cout<<"Error\n";
        }
    }
}