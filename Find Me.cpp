#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ar[n];
    for (int i = 0; i < n; ++i) {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int pos = -1;
    int start = 0;
    int end = n-1;
    while (start<=end){
        int mid = (start+end)/2;
        if (ar[mid]==k){
            pos = 1;
            break;
        } else if (ar[mid]<k){
            start = mid + 1;
        } else{
            end = mid-1;
        }
    }
    cout<<pos<<'\n';
}