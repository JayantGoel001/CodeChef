#include <iostream>
using namespace std;
int32_t main(){
    int n;
    cin>>n;
    int countO=0;
    int countE=0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if (x%2==0){
            countE++;
        } else{
            countO++;
        }
    }
    if (countE>countO){
        cout<<"READY FOR BATTLE";
    } else{
        cout<<"NOT READY";
    }
}