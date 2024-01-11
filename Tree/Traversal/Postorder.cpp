#include<bits/stdc++.h>
using namespace std;
void postorder(Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->val;
}
int main(){

}