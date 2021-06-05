#include <iostream>
#include <valarray>

#define int unsigned long long int
using namespace std;
int power(int x,int y){
    if(y==0){
        return 1;
    }
    if (y%2==0){
        return power(x*x,y/2);
    } else{
        return x * power(x*x,(y-1)/2);
    }
}
int calculateGP(int n){
    return (power(2,n)-1);
}
int calculateEaten(int x,int y){
    return floor(log((y+x)/x)/log(2.0));
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int x,y;
        cin>>x>>y;
        if (y%x!=0){
            cout<<"-1\n";
        } else{
            int count = 0;
            while (y>0){
                int time = calculateEaten(x,y);
                y = y - x * calculateGP(time);
                count+=time;
                if (y!=0){
                    count++;
                }
                if (time==0){
                    break;
                }
            }
            if (y!=0){
                cout<<"-1\n";
            } else {
                cout << count << "\n";
            }
        }
    }
}