#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int dfr=INT_MAX;
        bool flag=false;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                flag=true;
                break;
            }
            dfr=min((arr[i]-arr[i-1]),dfr);
        }
        if(flag){
            cout<<0<<endl;
        }else if()
    }
}