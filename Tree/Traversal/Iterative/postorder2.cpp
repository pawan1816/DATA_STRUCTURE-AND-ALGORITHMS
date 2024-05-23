vector<int>postorder(TreeNode* root){
    vector<int>ans;
    TreeNode* curr=root;
    stack<int>st;
    while(curr!=nullptr || !st.empty()){
        if(curr!=nullptr){
            st.push(curr);
            curr->left;
        }else{
            TreeNode* temp=st.top()->right;
            if(temp==nullptr){
                temp=st.top();
                st.pop();
                ans.push_back(temp);
                while(!st.empty() && temp=st.top()->right){
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }
            }else{
                curr=temp;
            }
        }
    }
    return ans;
}