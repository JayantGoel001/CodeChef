#include<iostream>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int N= 1000;
    int **ar = new int*[N];
    for (int i = 0; i < N; ++i) {
        ar[i] = new int[N];
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i==0 && j==0){
                ar[i][j] = 1;
            }else if (j==0){
                ar[i][j] = ar[i-1][j] + i+1;
            } else if (i==0){
                ar[i][j] = ar[i][j-1] + j;
            } else {
                ar[i][j] = ar[i][j - 1] + i+j;
            }
        }
    }
    for (int i = 0; i < t; ++i) {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        x1--;
        y1--;
        x2--;
        y2--;
        int sum = 0;
        while (x1<=x2){
            sum+=ar[x1++][y1];
        }
        while (y1<y2){
            sum+=ar[x2][++y1];
        }
        cout<<sum<<"\n";
    }
}