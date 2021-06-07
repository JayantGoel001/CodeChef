#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    char ch;
    cin>>ch;
    if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ){
        cout<<"Vowel";
    } else{
        cout<<"Consonant";
    }
}