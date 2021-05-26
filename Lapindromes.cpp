#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int freq[26];
        for (int i = 0; i < 26; ++i) {
            freq[i] = 0;
        }
        for (int i = 0; i < str.length()/2; ++i) {
            freq[str[i]-97]++;
            freq[str[str.length()-i-1]-97]--;
        }
        bool result = true;
        for(int i =0;i<26;i++){
            if (freq[i]!=0){
                result = false;
                break;
            }
        }
        if (result){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}