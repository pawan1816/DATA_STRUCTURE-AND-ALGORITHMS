#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        int arr[n][n];
        int temp;
        int Min=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>temp;
                if(temp<Min){
                    Min=temp;
                }
                arr[i][j]=temp;
            }
        }
        unordered_map<int,int>mp;
        int ar[n];
        ar[0]=Min;
        for(int i=1;i<n;i++){
            ar[i]=c+ar[i-1];
        }
        for(int i=0;i<n;i++){
            mp[ar[i]]++;
            int tempro=ar[i];
            for(int j=1;j<n;j++){
                tempro+=d;
                mp[tempro]++;
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mp.find(arr[i][j])==mp.end()){
                    flag=false;
                    break;
                }else{
                    mp[arr[i][j]]--;
                    if(mp[arr[i][j]]==0){
                        mp.erase(arr[i][j]);
                    }
                }
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}