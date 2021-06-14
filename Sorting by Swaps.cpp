#include<bits/stdc++.h>
#define int long long int
using namespace std;
int mergeArr(int *ar,int left,int mid,int right,int n){
    int i = left;
    int j = mid;
    int k = left;
    int temp[n];
    int inv_count = 0;
    while (i<=mid -1 && j<=right){
        if (ar[i]<=ar[j]){
            temp[k++] = ar[i++];
        } else{
            temp[k++] = ar[j++];
            inv_count += (mid - i);
        }
    }
    while (i<=mid-1){
        temp[k++] = ar[i++];
    }
    while (j<=right){
        temp[k++] = ar[j++];
    }
    for (int l = left; l <=right ; ++l) {
        ar[l] = temp[l];
    }
    return inv_count;
}
int mergeSort(int *ar,int i,int j,int n){
    int inv_count = 0;
    if (i<j){
        int mid = (i + j)/2;
        inv_count += mergeSort(ar,i,mid,n);
        inv_count += mergeSort(ar,mid+1,j,n);

        inv_count += mergeArr(ar,i,mid+1,j,n);
    }
    return inv_count;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        int answer = mergeSort(ar,0,n-1,n);
        cout<<answer<<"\n";
    }
}