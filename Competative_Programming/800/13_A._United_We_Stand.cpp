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
        sort(arr.begin(),arr.end());
        bool flag=false;
        int count=1;
        vector<int>arr1,arr2;
        for(int i=1;i<n;i++){
          if(arr[i]==arr[i-1]){
            count++;
          }
        }
        if(count==n){
            cout<<-1<<endl;
        }else{
            int temp=arr[0];
            int i=0;
            while(temp==arr[i]){
                arr1.push_back(arr[i]);
                i++;
            }
            while(i<n){
                arr2.push_back(arr[i]);
                i++;
            }
            int s1=arr1.size();
            int s2=arr2.size();
            cout<<s1<<" "<<s2<<endl;
            for(int j=0;j<s1;j++){
                cout<<arr1[j]<<" ";
            }
            cout<<endl;
            for(int j=0;j<s2;j++){
                cout<<arr2[j]<<" ";
            }
        }
    }
}