#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
     int n,m;
     cin>>n>>m;
     int temp;
     bool flag=false;
     for(int i=0;i<n;i++){
        cin>>temp;
        if(temp==m){
            flag=true;
        }
     }
     if(flag){
        cout<<"Yes"<<endl;
     }else{
        cout<<"No"<<endl;
     }
    }
    return 0;
}