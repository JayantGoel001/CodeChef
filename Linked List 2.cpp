#include<bits/stdc++.h>
#define int long long int
#define INF 1e18
using namespace std;
struct Node {
    int data;
    struct Node* next;
    Node(){
        next = NULL;
    }
    Node(int x){
        data = x;
        next = NULL;
    }
};
Node* merge(Node* head1, Node* head2){
    Node *temp = new Node();
    Node *headNew = temp;
    while (head1!=NULL && head2!=NULL){
        if (head1->data<=head2->data){
            temp->next = new Node(head1->data);
            temp = temp->next;
            head1 = head1->next;
        } else{
            temp->next = new Node(head2->data);
            temp = temp->next;
            head2 = head2->next;
        }
    }
    while (head1!=NULL){
        temp->next = new Node(head1->data);
        temp = temp->next;
        head1 = head1->next;
    }
    while (head2!=NULL){
        temp->next = new Node(head2->data);
        temp = temp->next;
        head2 = head2->next;
    }
    return headNew->next;
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