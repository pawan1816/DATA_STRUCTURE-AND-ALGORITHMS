#include<bits/stdc++.h>
using namespace std;
// preorder traversal
// time complexity O(n)
// if vector space complexity O(n);
int preorder(Node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->val;
    preorder(root->left);
    preorder(root->right);
}
int main(){

}