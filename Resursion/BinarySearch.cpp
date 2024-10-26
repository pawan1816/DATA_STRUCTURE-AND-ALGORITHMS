// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void BinarySearch(vector<int>&arr,int start,int end,int elem){
    if(start>end){
        cout<<"element not found ";
        return;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==elem){
        cout<<"element found at index "<<mid;
        return;
    }else if(arr[mid]>elem){
        end=mid-1;
    }else{
        start=mid+1;
    }
    BinarySearch(arr,start,end,elem);
}
int main() {
    vector<int>arr={1,2,3,5,6,7,8,9,14,14,14,14,14,15,45};


    int temp;
    cin>>temp;
    int n=arr.size();
    BinarySearch(arr,0,n,temp);

    return 0;
}