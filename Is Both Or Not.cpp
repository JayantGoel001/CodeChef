#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%5==0 && n%11==0){
        cout<<"BOTH\n";
    } else if (n%5==0 || n%11==0){
        cout<<"ONE\n";
    } else{
        cout<<"NONE\n";
    }
}