#include<bits/stdc++.h>
using namespace std;

void subsetByBit_representation(vector<vector<int>>&ans,int n){
    for(int b=0;b<(1<<n);b++){
        vector<int>subset;
        for(int i=0;i<n;i++){
            if(b&(1<<i)){
                subset.push_back(i);
            }
        }
        ans.push_back(subset);
    }
}
int main() {
    vector<int>arr;
    int n=5;
    vector<vector<int>>ans;
    subsetByBit_representation(ans,n);
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