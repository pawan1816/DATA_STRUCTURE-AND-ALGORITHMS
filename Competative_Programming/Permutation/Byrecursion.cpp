#include<bits/stdc++.h>
using namespace std;
void search(int n,vector<vector<int>>&ans,vector<int>temp,bitset<10>bs){
    if(temp.size()==n){
        ans.push_back(temp);
        return;
    }else{
        for(int i=0;i<n;i++){
        if(bs[i]){
            continue;
        }
        bs[i]=1;
        temp.push_back(i);
        search(n,ans,temp,bs);
        bs[i]=0;
        temp.pop_back();
            
        }
    }
    
    
}

int main() {
    bitset<10>bs;
    for(int i=0;i<3;i++){
        bs[i]=0;
    }
     vector<int>arr;
    vector<vector<int>>ans;
    search(3,ans,arr,bs);
   cout<<ans.size()<<" "<<ans[0].size()<<"\n";
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}