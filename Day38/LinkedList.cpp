#include<iostream>
using namespace std;
struct {
    int data;
    struct Node *head;
    struct Node *p=head;
};
int main(){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
    return 0;
}