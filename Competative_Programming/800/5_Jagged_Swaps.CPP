#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int temp;
        bool flag=false;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>temp;
            arr[i]=temp;
            mp[temp]++;
            if(temp>n){
                flag=true;
            }
        }
        for(auto it:mp){
            if(it.second>=2){
                flag=true;
                break;
            }
        }
        if(arr[0]!=1 || flag==true){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}