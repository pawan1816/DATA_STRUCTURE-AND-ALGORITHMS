#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=6;
    vector<int> permutation;
     for (int i = 0; i < n; i++) {
     permutation.push_back(i);
     }
     vector<vector<int>>ans;
     do {
         ans.push_back(permutation);
     } while (next_permutation(permutation.begin(),permutation.end()));
     cout<<ans.size();
    return 0;
}