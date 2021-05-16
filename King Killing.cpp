#include<iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
class Tree{
public:
    ll data,height;
    vector<Tree*> children;
    Tree(ll data){
        this->data = data;
        this->height = 0;
    }
};
void adjacentListToTree(Tree *tree,vector<vector<ll>> &adj,vector<bool> &visited){
    visited[tree->data] = true;
    for (auto it:adj[tree->data]) {
        if (!visited[it]){
            tree->children.push_back(new Tree(it));
        }
    }
    for(auto it:tree->children){
        adjacentListToTree(it,adj,visited);
    }
}
void findHeight(Tree *tree,ll height){
    tree->height = height;
    for (auto it:tree->children) {
        findHeight(it,height+1);
    }
}
void findLeaves(Tree *tree,vector<pair<ll,ll>> &leaves){
    for (auto it:tree->children) {
        findLeaves(it,leaves);
    }
    if (tree->children.empty()){
        leaves.push_back(make_pair(tree->height,tree->data+1));
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<vector<ll>> adj(n);
        vector<bool> visited(n);
        for (int j = 0; j < n; ++j) {
            visited[j] = false;
        }
        Tree *tree = new Tree(0);
        vector<pair<ll,ll>> output;
        for (int i = 0; i < n - 1; ++i) {
            ll u,v;
            cin>>u>>v;
            u-=1;
            v-=1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        adjacentListToTree(tree,adj,visited);
        findHeight(tree,0);
        for (int i = 0; i < tree->children.size(); ++i) {
            vector<pair<ll,ll>> leaves;
            findLeaves(tree->children[i],leaves);
            sort(leaves.begin(),leaves.end());
            pair<ll,ll> pr = leaves[0];
            vector<pair<ll,ll>> vp;
            vp.push_back(pr);
            bool found= false;
            ll value = pr.first;
            ll j = 1;
            while (j<leaves.size()){
                while (j<leaves.size() && leaves[j].first==value){
                    if (found){
                        vp.push_back(make_pair(pr.first+1,leaves[j].second));
                    } else{
                        vp.push_back(make_pair(leaves[j].first,leaves[j].second));
                    }
                    j+=1;
                }
                if (j<leaves.size()){
                    vp.clear();
                    found = true;
                    pr.second = leaves[j].second;
                    vp.push_back(make_pair(pr.first+1,leaves[j].second));
                    value = leaves[j].first;
                    j+=1;
                }
            }
            for (int k = 0; k < vp.size(); ++k) {
                output.push_back(make_pair(vp[k].first,vp[k].second));
            }
        }
        sort(output.begin(), output.end());
        ll numberOfDays = output[0].first;
        vector<ll> result;
        for(auto it:output){
            if (it.first==numberOfDays){
                result.push_back(it.second);
            } else{
                break;
            }
        }
        cout<<result.size()<<" "<<numberOfDays<<"\n";
        for (auto it:result) {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}