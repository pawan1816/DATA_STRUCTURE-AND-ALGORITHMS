#include<bits/stdc++.h>
using namespace std;

int main() {
    int coins[]={1,2,5,10,20,100,200};
    int n=8;
    int value[n];
    int first[n];
    value[0]= 0;
     for (int x = 1; x <= n; x++) {
     value[x] = INT_MAX;
     for (auto c : coins) {
     if (x-c >= 0 && value[x-c]+1 < value[x]) {
     value[x] = value[x-c]+1;
     first[x] = c;
     }
     }
 }
 int temp=n;
  while (temp > 0) {
 cout << first[temp] << "\n";
 temp-= first[temp];
 }
 cout<<"\n";
 for(int i=0;i<=n;i++){
     cout<<i<<"--> "<<value[i]<<" "<<first[i]<<"\n";
 }
 cout<<"\n";
 cout<<value[n];

    return 0;
}