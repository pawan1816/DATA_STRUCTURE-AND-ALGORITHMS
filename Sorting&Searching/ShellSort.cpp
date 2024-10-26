#include<bits/stdc++.h>
using namespace std;
void shellSort(int n,int arr[]){
    int gap=n/2;
    while(gap>0){
        for(int i=gap;i<n;i++){
            for(int j=i-gap;j>=0;j=j-gap){
                if(arr[j+gap]>arr[j]){
                    break;
                }else{
                    int temp=arr[j];
                    arr[j]=arr[j+gap];
                    arr[j+gap]=temp;
                }
                
            }
        }
        gap=gap/2;
    }
}
int main() {
    int arr[10]={5,3,2,5,2,6,8,9,1,0};
    int n=10;
    
    shellSort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


/* Time Complexity:

Best Case: O(nlogn)O(nlogn) - Using optimal gap sequence.
Worst Case: o(n^2)O(n2)-Using poor gap sequence.
Average Case: O(nlogn)O(nlogn) - Using optimal gap sequence.
Space Complexity:  O(1) O(1)- No additional space required apart from the input list.

        Advantages:

        More efficient than simple algorithms like bubble, selection, and insertion sort.
        Relatively simple to implement.
        Disadvantages:

        Not as efficient as advanced algorithms like quicksort, heapsort, or mergesort.
*/