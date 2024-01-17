// directed Acyclic Graph (DAG)

// Topological sort : linear ordering of verticas for every edge u to v, u always appers v ordering
// for visited we can use array or vector or map of int , bool any of them
// time complexity O(n)
// space complexity O(n)+O(E)
void dfs(unordered_map<int,bool>&visited,unordered_map<int,vector<int>>&adj,int node,stack<int>&st){
    visited[node]=1;
    for(auto it:adj[node]){
        if(!visited[it]){
            dfs(visited,adj,it,st);
        }
    }
    st.push(node);  
}
vector<int> TopologicalSort(vector<vector<int>>&edges,int v,int e){
    unordered_map<int,vactor<int>>adjacencyList;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adjacencyList[u].push_back(v);
    }
    unordered_map<int,bool>visited;
    vector<int>ans;
    stack<int>st;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            dfs(visited,adjacencyList,i,st);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}