#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[10][10];
        char ch;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>ch;
                arr[i][j]=ch;
            }
        }
        int ans=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(arr[i][j]=='.'){
                    continue;
                }
                 else if(i==0 || j==0 || j==9 || i==9){
                    ans+=1;
                 }else if(i==1 || j==1 || j==8 || i==8){
                    ans+=2;
                 }else if(i==2 || j==2 || i==7 || j==7){
                    ans+=3;
                 }else if(i==3 || j==3 || i==6 || j==6){
                    ans+=4;
                 }else{
                    ans+=5;
                 }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}