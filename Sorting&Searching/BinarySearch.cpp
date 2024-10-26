#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of the array \n";
    cin>>n;
    vector<int>arr;
    cout<<"Enter the "<<n<<" Integer in Sorted Order \n";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Enter the Integer That you want to search \n";
    int ele;
    cin>>ele;
    bool flag=false;
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==ele){
            flag=true;
            break;
        }else if(arr[mid]<ele){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    if(flag){
         cout<<"Yes the Element is Found \n";
    }else{
        cout<<"Integer Not Found\n";
    }

}