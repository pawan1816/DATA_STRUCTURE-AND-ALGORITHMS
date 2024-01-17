// acyclic directed graph
//BFS

// steps 
// step1 : find indegree of all node
// step2 : create queue and insert all the 0 indegree node
// step3 : do BFS
// time complexity O(n+e) space complexity O(n+e) 
vector<int> totologicalsort(vector<vector<int>>&edged,int v,int e){

    unordered_map<int,vector<int>>adj;
    vector<int>indegree(v);
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        indegree[v]++;
    }
    queue<int>q;
    for(int i=0;i<v;i++){
        if(inorder[i]==0){
            q.push(i);
        }
    }
    vector<int>ans;
    while(!q.empty()){
        int temp=q.front();
        ans.push_back(temp);
        q.pop();
        for(auto it:adj[temp]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(indegree[it]);
            }
        }
    }
    return ans;
}