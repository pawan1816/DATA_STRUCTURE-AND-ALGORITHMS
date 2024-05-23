#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,q;
        cin>>k>>q;
        int arr1[k];
        int Min=INT_MAX;
        int arr2[q];
        int t;
        for(int i=0;i<k;i++){
           cin>>t;
           if(t<Min){
            Min=t;
           }
           arr1[i]=t;
        }
        for(int i=0;i<q;i++){
            cin>>t;
            arr2[i]=t;
        }
        for(int i=0;i<q;i++){
            if(arr2[i]>=Min){
                cout<<Min-1<<" ";
            }else{
              cout<<arr2[i]<<" ";
            }
        }
        cout<<endl;
    }
}