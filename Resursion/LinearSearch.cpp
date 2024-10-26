// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void LinearSearch(vector<int>&arr,int index,int n,int elem){
    if(index>=n){
        cout<<"element Not Found ";
        return;
    }
    if(arr[index]==elem){
        cout<<"Element is found at "<<index<<" index.";
        return;
    }
    LinearSearch(arr,index+1,n,elem);
}
int main() {
    vector<int>arr={1,2,3,5,6,7,8,9,14,14,14,14,14,15,45};
    int temp;
    cin>>temp;
    int n=arr.size();
    LinearSearch(arr,0,n,temp);

    return 0;
}