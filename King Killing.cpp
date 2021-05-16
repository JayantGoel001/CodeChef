#include<iostream>
#include <vector>
#include <algorithm>

#define ll long long int
using namespace std;
class Tree{
public:
    ll data,height;
    vector<Tree*> children;
    Tree(){
        this->data = 0;
    }
    Tree(ll data){
        this->data = data;
        this->height = 0;
    }
};
bool cmp(const pair<ll,ll> &a,const pair<ll,ll> &b){
    return a.second<b.second;
}
void findHeight(Tree *tree,ll height){
    tree->height = height;
    for (int i = 0; i < tree->children.size(); ++i) {
        findHeight(tree->children[i],height+1);
    }
}
void findLeaves(Tree *tree,vector<pair<ll,ll>> &leaves){
    for (int i = 0; i < tree->children.size(); ++i) {
        findLeaves(tree->children[i],leaves);
    }
    if (tree->children.empty()){
        leaves.emplace_back(tree->data+1,tree->height);
    }
}
void adjacentListToTree(Tree *tree,vector<vector<ll>> &adj,bool *visited){
    visited[tree->data] = true;
    for (int i = 0; i < adj[tree->data].size(); ++i) {
        if (!visited[adj[tree->data][i]]){
            tree->children.push_back(new Tree(adj[tree->data][i]));
        }
    }
    for(auto it:tree->children){
        adjacentListToTree(it,adj,visited);
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
        bool *visited = new bool[n];
        for (int j = 0; j < n; ++j) {
            visited[j] = false;
        }
        Tree *tree = new Tree(0);
        vector<pair<ll,ll>> output;
        vector<pair<ll,ll>> leaves;
        for (int i = 0; i < n - 1; ++i) {
            ll u,v;
            cin>>u>>v;
            adj[u-1].push_back(v-1);
            adj[v-1].push_back(u-1);
        }
        adjacentListToTree(tree,adj,visited);
        findHeight(tree,0);
        for (int i = 0; i < tree->children.size(); ++i) {
            findLeaves(tree->children[i],leaves);
            sort(leaves.begin(),leaves.end(),cmp);
            pair<ll,ll> pr = leaves[0];
            vector<pair<ll,ll>> vp;
            vp.push_back(pr);
            bool found= false;
            ll value = pr.second;
            int j = 1;
            while (j<leaves.size()){
                while (j<leaves.size() && leaves[j].second==value){
                    if (found){
                        vp.emplace_back(leaves[j].first,pr.second+1);
                    } else{
                        vp.emplace_back(leaves[j]);
                    }
                    j+=1;
                }
                if (j<leaves.size()){
                    vp.clear();
                    found = true;
                    pr.first = leaves[j].first;
                    vp.emplace_back(leaves[j].first,pr.second+1);
                    value = leaves[j].second;
                    j+=1;
                }
            }
            leaves.clear();
            for (int k = 0; k < vp.size(); ++k) {
                output.emplace_back(vp[k]);
            }
        }
        sort(output.begin(), output.end(),cmp);
        ll numberOfDays = output[0].second;
        vector<ll> result;
        for(auto it:output){
            if (it.second==numberOfDays){
                result.push_back(it.first);
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