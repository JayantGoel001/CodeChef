#include<iostream>
#define ll long long int
using namespace std;
bool foundChar(char ch){
    string eq ="EQUINOX";
    for (char i : eq) {
        if (i==ch){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        ll n,a,b;
        cin>>n>>a>>b;
        ll pointA = 0;
        ll pointB = 0;
        string str;
        cin.ignore(256, '\n');
        for (int i = 0; i < n; ++i) {
            getline(cin,str);
            if (foundChar(str[0])){
                pointA+=a;
            } else{
                pointB+=b;
            }
        }
        if (pointA>pointB){
            cout<<"SARTHAK\n";
        } else if (pointA<pointB){
            cout<<"ANURADHA\n";
        } else{
            cout<<"DRAW\n";
        }
    }
}