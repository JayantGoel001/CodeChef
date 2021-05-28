#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        int loss = 0;
        int x = 1;
        int y = 2;
        int i = 0;
        while (true){
            if (i%2==0){
                a-=x;
                x+=2;
                loss = !loss;
                if (a<0){
                    break;
                }
            } else{
                b-=y;
                y+=2;
                loss = !loss;
                if (b<0){
                    break;
                }
            }
            i++;
        }
        if (loss==1){
            cout<<"Bob\n";
        } else{
            cout<<"Limak\n";
        }
    }
}