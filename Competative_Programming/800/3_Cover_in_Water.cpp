#include<bits/stdc++.h>
using namespace std;

int solve(string &str,int &n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(str[i]=='#'){
            continue;
        }else if(str[i]=='.' && str[i+1]=='.' && str[i+2]){
            return 2;
        }else{
            ans++;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        cout<<solve(str,n);
    }
    return 0;
}