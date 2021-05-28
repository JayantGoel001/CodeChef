#include <iostream>
using namespace std;
int main(){
    float x,y;
    cin>>x>>y;
    if ((int)x%5==0){
        if (y>x) {
            cout << y - x - 0.50 << "\n";
        } else{
            cout<<y<<"\n";
        }
    } else{
        cout<<y<<"\n";
    }
}