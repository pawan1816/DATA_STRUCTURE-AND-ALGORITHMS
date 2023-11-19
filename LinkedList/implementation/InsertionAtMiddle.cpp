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
void insertionalmiddla(int val,int pos){
    node* m=new node(val);
    if(pos==1){
       m->next=head;
       head=m;
    }
    else{
    node* temp=head;
    for(int i=1;i<pos-1;i++){
      temp=temp->next;
    }
    m->next=temp->next;
    temp->next=m;
    }
}
void insertionalbegnning(int val){
    node* m=new node(val);
    m->next=head;
    head=m;
}
void printlinkedlist(){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"end"<<endl;
}
int main(){

    insertionalbegnning(1);
    insertionalbegnning(2);
    insertionalbegnning(3);
    insertionalbegnning(4);
    insertionalbegnning(5);
    insertionalbegnning(6);
    insertionalbegnning(7);
    insertionalbegnning(8);
    insertionalbegnning(9);
    insertionalbegnning(10);
    insertionalbegnning(11);
    insertionalbegnning(12);
    insertionalmiddla(500,1);
    insertionalmiddla(100,5);
    insertionalmiddla(900,13);
    insertionalmiddla(900,15);
    printlinkedlist();

}