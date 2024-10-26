// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void sortedOrNot(vector<int>&arr,int n,int index){
    if(index>=n-1){
        cout<<"array is sorted...";
        return;
    }
    if(arr[index+1]<arr[index]){
        cout<<index;
        cout<<" array is not sorted";
        return;
    }
    sortedOrNot(arr,n,index+1);
}
int main() {
    vector<int>arr={1,2,3,5,6,7,8,9,14,14,14,14,14,15,45};
    int n=arr.size();
    sortedOrNot(arr,n,0);

    return 0;
}