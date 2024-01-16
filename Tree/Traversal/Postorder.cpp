#include<bits/stdc++.h>
using namespace std;
//postorder Traversal
// time complexity O(n)
// if vector space complexity O(n);
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