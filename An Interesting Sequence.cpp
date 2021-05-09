#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    vector<int> vs,vp;
    while (t--){
        int k;
        cin>>k;
        ll lastNum = 4*k+1;
        ll n = 2*k;
        vector<ll> v,factors,seq;
        for (int i = 2; i <=sqrt(lastNum) ; ++i) {
            if (lastNum%i==0){
                factors.push_back(i);
                if (i*i!=lastNum){
                    factors.push_back(lastNum/i);
                }
            }
        }
        sort(factors.begin(), factors.end());
        for (int i = 0; i < factors.size(); ++i) {
            seq.push_back(n/factors[i]);
        }
        for(int i=factors.size()-1;i>=0;i--){
            for (int j = i-1; j >=0; --j) {
                if (factors[i]%factors[j]==0){
                    factors[j]-=factors[i];
                }
            }
        }
        ll sum = 0;
        for (int i = 0; i < seq.size(); ++i) {
            sum+=seq[i];
        }
        ll output = lastNum + (n-sum-1);
        for (int i = 0; i < factors.size(); ++i) {
            output+=factors[i]*seq[i];
        }
        cout<<output<<"\n";
    }
}