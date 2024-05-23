#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int temp=n/m;
        if(n>m && n%m!=0){
            temp++;
        }
        temp=n-temp;
        if(k>=temp){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    } 
}