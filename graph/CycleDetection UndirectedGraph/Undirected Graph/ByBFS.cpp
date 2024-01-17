//Time complexity O(n)


class Solution {
public:
    bool bfsCycleDetection(unordered_map<int,vector<int>>&adj,int node,unordered_map<int,bool>&visited){
        unordered_map<int,int>parent;
        queue<int>q;
        q.push(node);
        visited[node]=1;
        parent[node]=-1;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(auto it:adj[temp]){
                if(visited[it]==true && it !=parent[temp]){
                    return true; 
                }else if(!visited[it]){
                    visited[it]=1;
                    q.push(it);
                    parent[it]=temp;
                }
            }
        }
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int m=prerequisites.size();
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<m;i++){
          int u=prerequisites[i][0];
          int v=prerequisites[i][1];
          adj[u].push_back(v);
           adj[v].push_back(u);
        }
        unordered_map<int,bool>visited;
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                bool check=bfsCycleDetection(adj,i,visited);
                if(check){
                    return false;
                }
            }
        }
        return true;
    }
};