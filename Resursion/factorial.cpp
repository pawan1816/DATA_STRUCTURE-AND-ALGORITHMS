#include<bits/stdc++.h>
using namespace std;


int factorialFunction(int n){

    if(n==0){
        return 1;
    }
    return n*factorialFunction(n-1);
}
int main(){
    int n=10;
    int ans=factorialFunction(n);
    cout<<ans<<endl;
}