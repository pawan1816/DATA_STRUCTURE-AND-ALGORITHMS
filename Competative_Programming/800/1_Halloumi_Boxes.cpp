#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;

}
int main(){
   
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int temp;
        for(int i=0;i<n;i++){ 
            cin>>temp;
            arr[i]=temp;
        }
        if(k==1 && !issorted(arr,n)){
           cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}