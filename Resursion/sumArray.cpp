#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>arr,int index,int n,int sum){
    if(index>=n){
        cout<<sum<<endl;
        return;
    }
    solve(arr,index+1,n,sum+arr[index]);
}

int main() {
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    solve(arr,0,n,0);
    return 0;
}