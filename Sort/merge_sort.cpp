#include<bits/stdc++.h>
using namespace std;

void help(int arr[],int start,int end){
    int mid=(start+end)/2;
    int l1=mid-start+1;
    int l2=end-mid;
    int *temp1=new int[l1];
    int *temp2=new int[l2];
    int main_index=start;
    for(int i=0;i<l1;i++){
        temp1[i]=arr[main_index];
        main_index++;
    }
    main_index=mid+1;
    for(int i=0;i<l2;i++){
        temp2[i]=arr[main_index];
        main_index++;
    }
    int i=0,j=0;
    main_index=start;
    while(i<l1 && j<l2){
        if(temp1[i]<temp2[j]){
            arr[main_index]=temp1[i];
            i++;
            main_index++;
        }else{
            arr[main_index]=temp2[j];
            j++;
            main_index++;
        }
    }
    while(i<l1){
        arr[main_index]=temp1[i];
        i++;
        main_index++;
    }
    while (j<l2)
    {
        arr[main_index]=temp2[j];
        j++;
        main_index++;
    }
}
void merge_sort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    help(arr,start,end);
}
int main(){
    int n=9;
    // cin>>n;
    int arr[n]={1,6,7,5,2,4,10,6,4};
    // for(int i=0;i<n;i++){
    //     int temp;
    //     cin>>temp;
    //     arr[i]=temp;
    // }
    merge_sort(arr,0,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<arr[1]<<" "<<arr[n]<<endl;
}