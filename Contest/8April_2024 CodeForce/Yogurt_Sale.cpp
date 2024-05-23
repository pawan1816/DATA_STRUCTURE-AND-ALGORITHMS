#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int ans=0;
        if(n==1){
            ans=a;
        }else if(n>1&&n%2==0&&a*2>b){
            ans=(n/2)*b;
        }
        else if(n>2&&n%2==1&&a*2>b)
            ans=((n-1)/2)*b+a;
        else{
            ans=n*a;
        }
        cout<<ans<<endl;

        
    }
}