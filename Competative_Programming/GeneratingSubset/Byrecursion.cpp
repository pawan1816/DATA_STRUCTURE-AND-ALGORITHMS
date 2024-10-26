#include<bits/stdc++.h>
using namespace std;

void subsetByrecursion(int n,int i,vector<int> v,vector<vector<int>>&ans){
    if(i==n){
        ans.push_back(v);
        return;
    }
    subsetByrecursion(n,i+1,v,ans);
    v.push_back(i);
    subsetByrecursion(n,i+1,v,ans);
    v.pop_back();
}

int main() {
    vector<int>arr;
    int n=3;
    vector<vector<int>>ans;
    subsetByrecursion(n,0,arr,ans);
    int s=ans.size();
    cout<<s<<"\n";
    for(int i=0;i<s;i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}