#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long k;
        cin>>n;
        cin>>k;
        long long arr[n];
        long long temp;
        for(long long i=0;i<n;i++){
            cin>>temp;
            arr[i]=temp;
        }
        long long i=0,j=n-1;
        long long ans=0;
        bool flag=true;
        while(i<=j && k>0){
          if(arr[i]+arr[j]<=k && i!=j){
            k-=(arr[i]+arr[j]);
            ans+=2;
            i++;
            j--;
            continue;
          }
          if(flag){
            arr[i]--;
            if(arr[i]==0){
                i++;
                ans++;
            }
          }else{
            arr[j]--;
            if(arr[j]==0){
                j--;
                ans++;
            }
          }
          k--;
          flag=!flag;
        }
        cout<<ans<<endl;
    }
}