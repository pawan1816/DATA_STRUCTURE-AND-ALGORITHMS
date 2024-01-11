// take (ONLY when increaseing)
// skip any time
// arr1-[0,1,0,3,2,3]
// arr=[]

class Solution {
public:
    int dp[2501][2501];
    int help(vector<int>& nums,int index,int n,int prev){
        if(index>=n){
            return 0;
        }
        if(prev!=-1 && dp[index][prev] != -1){
            return dp[index][prev];
        }
        int include=0;
        if(prev==-1 || nums[prev]<nums[index]){
            include=1+help(nums,index+1,n,index);
        }
        int exclude=help(nums,index+1,n,prev);
        if(prev!=-1){
            dp[index][prev]=max(include,exclude);
        }
        
        return max(include,exclude);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int prev=-1;
        memset(dp,-1,sizeof(dp));
        return help(nums,0,n,prev);
        
    }
};