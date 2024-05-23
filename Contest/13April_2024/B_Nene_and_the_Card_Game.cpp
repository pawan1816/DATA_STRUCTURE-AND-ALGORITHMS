#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            mp[temp]++;
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==2){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}