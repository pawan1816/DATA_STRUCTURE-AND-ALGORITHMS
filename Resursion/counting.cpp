#include<bits/stdc++.h>
using namespace std;

void counting(int n){
    if(n==0){
        return;
    }
    //cout<<n<<" ";// decending order
    counting(n-1);
    cout<<n<<" "; // assending order
}
int main(){
    int n=5;
    counting(n);
}