#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        char ship;
        cin>>ship;
        if (ship=='B' || ship=='b'){
            cout<<"BattleShip";
        } else if (ship=='C' || ship=='c'){
            cout<<"Cruiser";
        } else if (ship=='D' || ship=='d'){
            cout<<"Destroyer";
        } else if (ship=='F' || ship=='f'){
            cout<<"Frigate";
        }
        cout<<"\n";
    }
}