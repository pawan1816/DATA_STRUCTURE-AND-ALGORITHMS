#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of the array \n";
    cin>>n;
    vector<int>arr;
    cout<<"Enter the "<<n<<" Integer\n";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Enter the Integer That you want to search \n";
    int ele;
    cin>>ele;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(ele==arr[i]){
           flag=true;
           break; 
        }
    }
    if(flag){
         cout<<"Yes the Element is Found \n";
    }else{
        cout<<"Integer Not Found\n";
    }

}
