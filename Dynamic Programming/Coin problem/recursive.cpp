#include<bits/stdc++.h>
using namespace std;
int solve(int n,int coins[],int s,bool ready[],int value[]){
    if(n<0){
        return INT_MAX-1;
    }
    if(n==0){
        return 0;
    }
    if(ready[n]){
        return value[n];
    }
    int temp=INT_MAX;
    for(int i=0;i<s;i++){
        temp=min(temp,solve(n-coins[i],coins,s,ready,value)+1);
    }
    ready[n]=true;
    value[n]=temp;3
    return temp;
}
int main() {
    int coins[]={1,2,5,10,20,100,200};
    int n=562;
    bool ready[n]={false};
    int value[n];
    cout<<solve(n,coins,7,ready,value);
    return 0;
}