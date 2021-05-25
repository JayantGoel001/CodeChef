#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        string str1,str2;
        cin>>str1;
        cin>>str2;
        int opp = 0;
        for (int i = 0; i < str1.length(); ++i) {
            if (str1[i] != str2[i] && str1[i]!='?' && str2[i]!='?'){
                opp++;
            }
        }
        int unknown = 0;
        for (int i = 0; i < str1.length(); ++i) {
            if (str1[i]=='?' || str2[i]=='?'){
                unknown++;
            }
        }
        cout<<opp<<" "<<opp+ unknown<<"\n";
    }
}
