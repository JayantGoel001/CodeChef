#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
struct Node {
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
int getNthNodeFromEnd(struct Node* head, int n){
    int size = 0;
    Node* temp = head;
    while (temp!=NULL){
        temp = temp->next;
        size++;
    }
    int pos = size - n;
    while (pos--){
        head = head->next;
    }
    return head->data;
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

    }
}