#include<bits/stdc++.h>
using namespace std;

// inorder Traversal
// time complexity O(n)
// if vector space complexity O(n);
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