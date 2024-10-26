
// Time Complexity is- O(n+k) where k is the range of the element and n is the size of the array
// it is a non comparision based algorithm
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[20]={1,2,4,6,7,8,9,6,4,3,2,2,5,6,7,7,1,2,3,6};
    int range=9;
    int countArr[9]={};
    int n=20;
    for(int i=0;i<n;i++){
        countArr[arr[i]]++;
    }
    vector<int>CummalativeSum;
    int sum=0;
    for(int i=0;i<=9;i++){
        sum+=countArr[i];
        CummalativeSum.push_back(sum);
    }
    int ans[20];
    for(int i=n-1;i>=0;i--){
         int temp=arr[i];
         int index=CummalativeSum[temp];
         ans[index-1]=temp;
         CummalativeSum[temp]--;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}