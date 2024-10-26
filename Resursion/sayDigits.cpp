// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n<=0){
        return;
    }
    int temp=n%10;
    solve(n/10);
    if(temp==1){
        cout<<"One ";
    }else if(temp==2){
        cout<<"Two ";
    }else if(temp==3){
        cout<<"Three ";
    }else if(temp==4){
        cout<<"Four ";
    }else if(temp==5){
        cout<<"Five ";
    }else if(temp==6){
        cout<<"Six ";
    }else if(temp==7){
        cout<<"Seven ";
    }else if(temp==8){
        cout<<"Eight ";
    }else if(temp==9){
        cout<<"Nine ";
    }else{
        cout<<"Zero ";
    }
}
int main() {
    int n;
    cin>>n;
    if(n!=0){
        solve(n);
    }else{
        cout<<"Zero ";
    }
    

    return 0;
}