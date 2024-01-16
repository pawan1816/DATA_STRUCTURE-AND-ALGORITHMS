#include<bits/stdc++.h>
using namespace std;

// time complexity O(n)
// if vector space complexity O(n);
void levelorder(Node* root){
    if(root==nullptr){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node* temp=q.front();
            q.pop();
            cout<<temp->val;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}