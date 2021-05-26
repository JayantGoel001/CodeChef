#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a<b+c && b<a+c && c<a+b) {
        if (a == b && b == c && c == a) {
            cout << "1\n";
        } else if (a == b || b == c || c == a) {
            cout << "2\n";
        } else {
            cout << "3\n";
        }
    } else{
        cout<<"-1\n";
    }
}