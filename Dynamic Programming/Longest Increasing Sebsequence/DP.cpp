#include <bits/stdc++.h>
using namespace std;

// Function to compute LIS ending with index
// i using memoization
int lisEndAtI(vector<int>& arr, int i, vector<int>& dp)
{
    // Base case
    if (i == 0)
        return 1;

    // Check if the result is already computed
    if (dp[i] != -1)
        return dp[i];

    // Consider all elements on left of i,
    // recursively compute LISs ending with 
    // them and consider the largest
    int mx = 1;
    for (int prev = 0; prev < i; prev++)
        if (arr[prev] < arr[i])
            mx = max(mx, lisEndAtI(arr, prev, dp) + 1);

    // Store the result in the dp array
    dp[i] = mx;
    return dp[i];
}

int lis(vector<int>& arr)
{
    int n = arr.size();
  
    // Initialize memoization array with -1  
    vector<int> dp(n, -1);
  
    int res = 1;
    for (int i = 1; i < n; i++)
        res = max(res, lisEndAtI(arr, i, dp));
    return res;
}

// Driver program to test above function
int main()
{
    vector<int> arr = { 10, 22, 9, 33, 21, 50, 41, 60 };
    cout << "Length of lis is " << lis(arr);
    return 0;
}
