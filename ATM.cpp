#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    float x,y;
    cin>>x>>y;
    if ((int)x%5==0){
        if (y>=x + 0.50) {
            cout<<fixed<<setprecision(2)<< y - x - 0.50 << "\n";
        } else{
            cout<<fixed<<setprecision(2)<<y<<"\n";
        }
    } else{
        cout<<fixed<<setprecision(2)<<y<<"\n";
    }
}