#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        int countpos=0;
        int countneg=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp==-1){
                countneg++;
            }else{
                countpos++;
            }
        }
        int ans=0;
        if(countneg>countpos){
            if(n%2==0){
                ans+=(n/2)-countpos;
            }else{
                ans+=(n/2)-countpos+1;
            }
            countneg=(n/2);
        }
        if(countneg%2!=0){
            ans+=1;
        }
        cout<<ans<<endl;
    }
}