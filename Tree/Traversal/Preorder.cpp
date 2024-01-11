#include<bits/stdc++.h>
using namespace std;

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