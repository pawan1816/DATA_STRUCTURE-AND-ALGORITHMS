#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            arr[i]=temp;
        }
        int ans=arr[0];
        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1])>ans){
                ans=arr[i]-arr[i-1];
            }
        }
        if(ans<(x-arr[n-1])*2){
            cout<<(x-arr[n-1])*2<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    return 0;
}