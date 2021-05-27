#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int g;
        cin>>g;
        for (int _ = 0; _ < g; ++_) {
            int I, N, Q;
            cin >> I >> N >> Q;
            int count;
            if (I==1){
                if (Q==1){
                    count = N/2;
                } else{
                    count = N - N/2;
                }
            } else{
                if (Q==2){
                    count = N/2;
                } else{
                    count = N - N/2;
                }
            }
            cout << count << "\n";
        }
    }
}