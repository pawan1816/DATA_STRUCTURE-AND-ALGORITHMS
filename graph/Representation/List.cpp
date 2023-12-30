#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> edges={{0,3},{1,2},{1,5},{2,4},{3,5},{5,4},{5,0}};

    unordered_map<int,vector<int>>adjacencyList;
    int n=edges.size();
    for(int i=0;i<n;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adjacencyList[u].push_back(v);
    }
    for(auto it: adjacencyList){
        cout<<it.first<<":";
        vector<int>temp=it.second;
        for(int j=0;j<temp.size();j++){
            cout<<temp[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}