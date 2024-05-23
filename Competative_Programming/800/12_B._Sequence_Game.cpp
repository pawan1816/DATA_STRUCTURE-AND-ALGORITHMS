#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        vector<int>arr;
        int temp;
        for(int i=0;i<m;i++){
          cin>>temp;
          arr.push_back(temp);
        }
        vector<int>ans;
        ans.push_back(arr[0]);
        for(int i=1;i<m;i++){
            if(arr[i]>=arr[i-1]){
                ans.push_back(arr[i]);
            }else{
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
            }
        }
        int n=ans.size();
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}