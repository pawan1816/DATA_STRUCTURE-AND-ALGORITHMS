#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    int value[5][5]={{3,7,9,2,7},{9,8,3,5,5},{1,7,9,8,5},{3,8,6,4, 10},{6,3,9,7,8}};
    
    int sum[n+1][n+1];
    for(int i=0;i<n;i++){
        sum[0][i]=value[0][i];
    }
    for(int i=0;i<n;i++){
        sum[i][0]=value[i][0];
    }
    for (int y = 1; y < n; y++) {
     for (int x = 1; x < n; x++) {
     sum[y][x] = max(sum[y][x-1],sum[y-1][x])+value[y][x];
     }
     }
    for (int y = 0; y < n; y++) {
     for (int x = 0; x < n; x++) {
     cout<<sum[y][x]<<" ";
     }
     cout<<"\n";
     }
     cout<<"ans==> "<<sum[4][4]+value[0][0];
    return 0;
}