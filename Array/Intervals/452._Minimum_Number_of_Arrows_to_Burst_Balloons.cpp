// 452. Minimum Number of Arrows to Burst Balloons :::leetcode very important

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans=1;
        int n=points.size();
        sort(points.begin(),points.end());
        pair<int,int>prev={points[0][0],points[0][1]};
        for(int i=1;i<n;i++){
            pair<int,int>curr={points[i][0],points[i][1]};
            if(prev.second<curr.first){
                prev=curr;
                ans++;
            }
            else{
                prev.first=max(prev.first,curr.first);
                prev.second=min(prev.second,curr.second);
            }
        }
        return ans;
    }
};
int main(){
    vector<vector<int>>points{{1,2},{2,3},{3,4},{4,5}};
    Solution obj;
    cout<<obj.findMinArrowShots(points);
    cout<<"hello"<<" ";
}