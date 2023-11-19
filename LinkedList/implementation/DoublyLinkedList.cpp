#include<bits/stdc++.h>
using namespace std;
class node{
   public:
   node* left;
   node* right;
   int data;
   node(int val){
    data=val;
    right=nullptr;
    left=nullptr;
   }
   ~node();
};
node* head=nullptr;
void insertionalbegnning(int val){
    node* m=new node(val);
    if(head==nullptr){
        head=m;
        return;
    }
    head->left=m;
    m->right=head;
    head=m;
}
void printlinkedlistformbegnning(){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->right;
    }
}
void printfromend(){
    node* temp=head;
    while(temp->right!=nullptr){
        temp=temp->right;
    }
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->left;
    }
    cout<<"end"<<endl;
}
void insertionfromend(int val){
      node* m=new node(val);
      if(head==nullptr){
        head=m;
        return;
      }
      node* temp1=head;
      while(temp1->right!=nullptr){
        temp1=temp1->right;
      }
      temp1->right=m;
      m->left=temp1;
}
void insertionatmiddle(int val, int pos){
    node* m=new node(val);
    if(pos==1){
        m->right=head;
        head->left=m;
        head=m;
    }
    node* temp=head;
    for(int i=1;i<pos;i++){
        temp=temp->right;
    }
    m->right=temp;
    m->left=temp->left;
    temp->left->right=m;
    temp->left=m;
   
}
void deletionatbeggning(){
    if(head==nullptr){
        cout<<"deletion is not possible\n";
        return;
    }
    if(head->right==nullptr){
        head==nullptr;
    }
    head=head->right;
}
void deletionfromend(){
    if(head==nullptr){
        cout<<"no deletion operation can be done\n";
        return;
    }
    node* temp=head;
    while(temp->right!=nullptr){
        temp=temp->right;
    }
    temp->left->right=nullptr;
}
void deletionfrommiddle(int pos){
    int i=1;
    node* temp=head;
    for(int i=1;i<pos;i++){
        temp=temp->right;
    }
    temp->left->right=temp->right;
    temp->right->left=temp->left;
}
void searching(int val){
    node* temp=head;
    if( head==nullptr){
        return;
    }
    int pos=1;
    while(temp!=nullptr){
        if(temp->data==val){
            cout<<pos<<"\n   is the position of the respected value in the linkedlist";
        }
        pos++;
        temp=temp->right;
    }
    
}
int main(){
    insertionfromend(11);
    insertionfromend(12);
    insertionfromend(13);
    insertionfromend(14);
    insertionfromend(15);
    printlinkedlistformbegnning();
    cout<<"\n";
    printfromend();
    insertionalbegnning(1);
    insertionalbegnning(2);
    insertionalbegnning(3);
    insertionalbegnning(4);
    insertionalbegnning(5);
    insertionalbegnning(6);
    insertionalbegnning(7);
    insertionalbegnning(8);
    insertionalbegnning(9);
    printlinkedlistformbegnning();
    cout<<endl;
    printfromend();
    cout<<endl;
    insertionatmiddle(100,5);
    insertionatmiddle(200,6);
    insertionatmiddle(300,7);
    insertionatmiddle(400,8);
    insertionatmiddle(500,9);
    cout<<endl;
    printfromend();
    printlinkedlistformbegnning();
    cout<<"\n the deletion is bellow\n\n\n";
    deletionatbeggning();
    deletionatbeggning();
    deletionatbeggning();
    deletionfromend();
    deletionfromend();
    printlinkedlistformbegnning();
    cout<<endl;
    deletionfrommiddle(5);
    printlinkedlistformbegnning();
    cout<<endl<<endl;
    searching(500);
}