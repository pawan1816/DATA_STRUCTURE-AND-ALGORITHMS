#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=nullptr;
    }
};
node* head=nullptr;
void insertionatend(int val){
    node* m=new node(val);    
    if(head==nullptr){
        head=m;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=m;
}
void printlinkedlist(){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    insertionatend(1); 
    insertionatend(2);
    insertionatend(3); 
    insertionatend(4);
    insertionatend(5); 
    insertionatend(6);
    insertionatend(7); 
    insertionatend(8);
    insertionatend(9); 
    insertionatend(10);
    printlinkedlist();
}