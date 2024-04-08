#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int negative=0;
        int positive=0;
        int temp;
        for(int i=0;i<n-1;i++){
            cin>>temp;
            if(temp<0){
                negative+=temp;
            }else{
                positive+=temp;
            }
        }
        int ans=0;
        if(negative>positive){
            ans=(negative+positive);
            cout<<ans<<endl;
        }else{
            ans=(-1)*(positive+negative);
            cout<<ans<<endl;
        }
    }
}