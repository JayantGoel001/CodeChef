#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
vector<ll> pVector[200008],value,children,output;
void dfs(ll now, ll last){
    for(ll i=0; i < pVector[now].size(); i++){
        ll child= pVector[now][i];
        if(child!=last) {
            dfs(child, now);
        }
    }
    children.clear();
    for(ll i=0; i < pVector[now].size(); i++){
        ll child= pVector[now][i];
        if(child!=last)
            children.push_back(value[child]);
    }

    if(children.size() > 0){
        sort(children.begin(), children.end());
        ll x=children[0];
        ll checker=0;
        for(ll i=0; i < children.size(); i++){
            if(children[i] != x) checker++;
        }

        if(checker==0) value[now]+= x+1;
        if(checker!=0) value[now]+= x +2;
    }else
        value[now]=0;
}
void dfs1(ll node, ll par, ll minh){
    for(ll i=0; i < pVector[node].size(); i++){  //pVector

        ll child= pVector[node][i];

        minh = min(minh,value[node]);

        if(child!=par){

            if(value[child]>=minh-1){

                dfs1(child,node,minh);

            }

        }
    }
    if(value[node]==0){
        output.push_back(node);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--) {
        ll N; cin >> N;
        value.assign(N+1,0);
        for(ll i=0;i<N-1; i++){
            int l, r;
            cin >> l >> r;
            pVector[l].pb(r), pVector[r].pb(l);
        }
        dfs(1,0);
        int minx = INT_MAX;
        for(ll i = 0; i < pVector[1].size(); i++){
            ll child = pVector[1][i];
            if(value[child]<minx){
                minx = value[child];
            }
        }
        for(ll i=0; i < pVector[1].size(); i++){
            ll child = pVector[1][i];
            if(value[child] == minx)
                dfs1(child,1,minx);
        }

        sort(output.begin(), output.end());
        cout << output.size() << " " << minx + 1 << endl;
        for (ll i = 0; i < output.size(); ++i) cout << output[i] << " ";
        cout<<endl;
        for (ll i = 1; i <=N; ++i) {
            pVector[i].clear();
        }
        value.clear();
        output.clear();
    }
    return 0;
}