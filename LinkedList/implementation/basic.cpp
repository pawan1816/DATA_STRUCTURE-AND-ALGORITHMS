#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node* next;
   node(int n){
    data=n;
    next=nullptr;
   }
};
void printlinkedl(node* head){
    node* temp=head;
    while( temp->next!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    node* head=nullptr;
    head=new node(1);
    // head->next=node* temp1(2);
    // head->next->next=node* temp1(2);
    // head->next->next->next=node* temp1(2);
    // head->next->next->next->next=node* temp1(2);
    // head->next->next->next->next->next=node* temp1(2);
    printlinkedl(head);
}