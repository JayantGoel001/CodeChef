#include <iostream>
#include <vector>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin.ignore(256,'\n');
        getline(cin,str);
        cin.clear();
        vector<char> v;
        int initialDistance = 0;
        v.push_back(str[0]);
        for (int i = 1; i <n ; ++i) {
            if (str[i]==str[i-1]){
                initialDistance+=2;
            } else{
                initialDistance+=1;
            }
            v.push_back(str[i]);
        }
        for (int i = 0; i < k; ++i) {
            int p;
            cin>>p;
            p--;
            if (v[p]=='0'){
                v[p] = '1';
            } else{
                v[p] = '0';
            }
            if (p>0 && v[p-1]==v[p]){
                initialDistance+=1;
            } else if (p>0 && v[p-1]!=v[p]){
                initialDistance-=1;
            }
            if (p+1<n && v[p+1]==v[p]){
                initialDistance+=1;
            } else if (p+1<n && v[p+1]!=v[p]){
                initialDistance-=1;
            }
            cout<<initialDistance<<"\n";
        }
    }
}