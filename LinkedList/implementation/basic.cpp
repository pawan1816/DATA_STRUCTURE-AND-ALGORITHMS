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
    while( temp!=nullptr){
        if(temp->next==nullptr){
            cout<<temp->data;
        }
        else{
            cout<<temp->data<<"->";
        }
        
        temp=temp->next;
    }
}
int main(){
    node* head=nullptr;
    head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    head->next->next->next->next->next=new node(6);
    printlinkedl(head);
}