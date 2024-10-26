#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=10;
    int arr[10]={10,3,1,3,21,42,21,11,42,4};
    
    int lenght[10];
    for(int i=0;i<n;i++){
        lenght[i]=1;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                lenght[i]=max(lenght[i],lenght[j]+1);
            }
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,lenght[i]);
    }
    cout<<ans<<" ";
    return 0;
}