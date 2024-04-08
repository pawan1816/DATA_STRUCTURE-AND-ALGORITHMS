#include<bits/stdc++.h>
using namespace std;

char solve(char ch){
    return 'A'+ ch -'a';   
}
int main(){
    while(true){
        string str;
        cin>>str;
        int n=str.size();
        if(n==0){
            break;
        }
        for(int i=0;i<n;i++){
            cout<<solve(str[i]);
        }
        cout<<endl;
    }
    
}