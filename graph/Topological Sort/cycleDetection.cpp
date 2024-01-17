// using kahns algorthms


vector<int> totologicalsort(vector<vector<int>>&edged,int v,int e){

    unordered_map<int,vector<int>>adj;
    vector<int>indegree(v);
    for(int i=0;i<e;i++){
        int u=edges[i][0]-1;
        int v=edges[i][1]-1;
        adj[u].push_back(v);
        indegree[v]++;
    }
    queue<int>q;
    for(int i=0;i<v;i++){
        if(inorder[i]==0){
            q.push(i);
        }
    }
    int count=0;
    while(!q.empty()){
        int temp=q.front();
        count++;
        q.pop();
        for(auto it:adj[temp]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(indegree[it]);
            }
        }
    }
    return (count==n);
}