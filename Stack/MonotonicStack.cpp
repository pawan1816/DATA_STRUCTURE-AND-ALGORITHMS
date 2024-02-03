//mantain the order of the stack or follow a order.


// Next Greatest element
// Time complexity O(n*2)
// Space complexity O(n) 
vector<int> NextGrateatestElement(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n);
        stack<pair<int,int>>st;
        for(int i=n-1;i>=0;i--){
              while(!st.empty() && st.top().first<=temperatures[i]){
                  st.pop();
              }
              if(st.empty()){
                  ans[i]=0;
              }
              else{
                  ans[i]=st.top().second-i;
              }
              st.push({temperatures[i],i});
        }
        return ans;
    }