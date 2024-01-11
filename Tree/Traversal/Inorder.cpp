#include<bits/stdc++.h>
using namespace std;

// inorder Traversal
void inorder(Node* root){
    if(root==nullptr){
        return ;
    }
    inorder(root->left);
    cout<<root->val;
    inorder(root->right);
}
int main(){
    inorder(root);
}