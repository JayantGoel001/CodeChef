#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int l;
        cin>>l;
        cin.ignore(256, '\n');
        string s;
        getline(cin,s);
        int count1=0;
        int count0=0;
        bool found = false;
        for (int i = 0; i < l; ++i) {
            if (s[i]=='0'){
                count0++;
            } else{
                count1++;
            }
            if (count1>=count0){
                cout<<"YES\n";
                found = true;
                break;
            }
        }
        if (!found){
            cout<<"NO\n";
        }
    }
}