#include<bits/stdc++.h>
using namespace std;
class tree{
   public:
   int val;
   tree* left;
   tree* right;
   tree(int Val){
    val=Val;
    left=nullptr;
    right=nullptr;
   }
};
void traversal(tree* head){
    if(head==nullptr){
        return;
    }
    cout<<head->val<<" ";
    traversal(head->left);
    traversal(head->right);
}
int main(){
     tree* head=nullptr;
     head=new tree(1);
     head->left=new tree(2);
     head->right=new tree(3);
     head->left->left=new tree(4);
     head->left->right=new tree(5);
     traversal(head);
}