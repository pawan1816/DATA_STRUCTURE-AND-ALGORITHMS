

// important concept Cumulative Sum
// array       [1,4,5,3,2,6]
// cummalative sum=[1,5,10,13,15,21]   

vector CumulativeSum(vector<int>& nums) {
        vector<int>CumSum;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            CumSum.push_back(sum);
        }
        return CumSum;
}


// concenpt used in question examples
// 1. 560. Subarray Sum Equals K(leetcode medium level)