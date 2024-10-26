class Solution {
public:
    int arr[46]={0};
    int help(int i,int n){
        if(i>n){
            return 0;
        }
        if(i==n){
            return 1;
        }
        if(arr[i]!=0){
            return arr[i];
        }
        arr[i]=help(i+1,n)+help(i+2,n);
        return arr[i];
    }
    int climbStairs(int n) {
        return help(0,n);
    }
};