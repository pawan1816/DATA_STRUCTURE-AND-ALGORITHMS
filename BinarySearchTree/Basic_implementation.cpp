#include<bits/stdc++.h>
using namespace std;
class Node{
     public:
    int val;
    Node* left;
    Node* right;
   
    Node(int data){
        val=data;
        left=nullptr;
        right=nullptr;
    }
};
Node* insertAitem(Node* head,int data){
    if(head==nullptr){
        return new Node(data);
    }
    if(data < head->val){
        head->left=insertAitem(head->left,data);
    }
    else{
        head->right=insertAitem(head->right,data);
    }
    return head;
}
void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main(){
   Node* head=nullptr;
   head=insertAitem(head,5);
   insertAitem(head,2);
   insertAitem(head,39);
   insertAitem(head,12);
   insertAitem(head,3);
   insertAitem(head,4);
   insertAitem(head,9);
   insertAitem(head,11);
   insertAitem(head,33);
   inorder(head);
   return 0;
}