//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// by  using unordered set as a checking of visited element
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    // time complexity O(n) 
    // space complexity O(n)
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int>q;
        q.push(0);
        unordered_set<int>st;
        vector<int>ans;
        st.insert(0);
        while(!q.empty()){
            int temp=q.front();
            ans.push_back(temp);
            q.pop();
            for(auto it:adj[temp]){
                if(!st.count(it)){
                    q.push(it);
                    st.insert(it);
                }
            }
        }
        return ans;
    }
};

// by using vector as to check visited element
// time complexity O(n) 
    // space complexity O(n)
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        int visited[V]={0};
        int s=0;
        queue<int>q;
        if(visited[s]==0){
            ans.push_back(s);
            visited[s]=1;
            q.push(s);
        }
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            if(visited[temp]==0){
                visited[temp]=1;
                ans.push_back(temp);
            }
            for(auto it:adj[temp]){
                if(visited[it]==0){
                    q.push(it);
                }
            }
        }
        return ans;
    }
};
//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends