#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Output variables
        int sum = 0;
        vector<vector<int>> operations;

        // Type 1 operations
        for (int i = 0; i < n; ++i) {
            // Create a permutation for type 1 operation
            vector<int> permutation(n);
            for (int j = 0; j < n; ++j)
                permutation[j] = j + 1;

            // Swap first and ith elements
            swap(permutation[0], permutation[i]);

            // Calculate the sum and store the operation
            sum += permutation[0];
            operations.push_back({1, i + 1, permutation});
        }

        // Type 2 operations
        for (int i = 0; i < n; ++i) {
            // Create a permutation for type 2 operation
            vector<int> permutation(n);
            for (int j = 0; j < n; ++j)
                permutation[j] = j + 1;

            // Swap first and ith elements
            swap(permutation[0], permutation[i]);

            // Calculate the sum and store the operation
            sum += permutation[0];
            operations.push_back({2, i + 1, permutation});
        }

        // Output the result
        cout << sum << " " << operations.size() << endl;
        for (auto &op : operations) {
            cout << op[0] << " " << op[1] << " ";
            for (int i = 0; i < n; ++i)
                cout << op[2][i] << " ";
            cout << endl;
        }
    }
    return 0;
}