#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int maxiP1 = -1;
    int maxiP2 = -1;
    int sum1 = 0;
    int sum2 = 0;
    while (t--){
        int p1,p2;
        cin>>p1>>p2;
        sum1+=p1;
        sum2+=p2;
        if (sum1>sum2){
            maxiP1 = max(maxiP1,sum1-sum2);
        } else{
            maxiP2 = max(maxiP2,sum2-sum1);
        }
    }
    if (maxiP1>maxiP2){
        cout<<"1 "<<maxiP1<<"\n";
    } else{
        cout<<"2 "<<maxiP2<<'\n';
    }
}