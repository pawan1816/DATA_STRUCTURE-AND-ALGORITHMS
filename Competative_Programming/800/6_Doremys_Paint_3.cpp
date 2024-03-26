#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>temp;
            mp[temp]++;
        }
        if(mp.size()==1){
            cout<<"yes"<<endl;
        }else if(mp.size()==2){
            int f,s;
            bool flag=true;
            for(auto it:mp){
               if(flag){
                f=it.second;
                flag=false;
               }else{
                s=it.second;
               }
            }
            if(abs(f-s)<=1){
                cout<<"yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }

        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}