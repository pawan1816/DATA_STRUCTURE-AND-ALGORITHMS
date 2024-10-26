#include<bits/stdc++.h>
using namespace std;


void swapF(int &n,int &m){
    int temp=n;
    n=m;
    m=temp;
}
int partitionCall(int arr[],int start,int end){
    int value=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(value>=arr[i]){
            count++;
        }
    }
    swapF(arr[start],arr[start+count]);
    int i=start,j=end;
    while(i<start+count && j>start+count){
        while(arr[i]<=value){
            i++;
        }
        while(arr[j]>value){
            j--;
        }
        if(i<start+count && j>start+count){
            swapF(arr[i],arr[j]);
        }
        i++;
        j--;
    }
    return count+start;
}
void quickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int pivort=partitionCall(arr,start,end);
    quickSort(arr,start,pivort-1);
    quickSort(arr,pivort+1,end);
}
int main(){
    int n=10;
    int arr[10]={8,5,4,7,3,2,8,9,1,56};
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}