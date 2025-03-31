#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Apply operations sequentially
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1] && nums[i] != 0) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        // Step 2: Move non-zero elements to the front
        int index = 0; // Position to place non-zero elements
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[index++] = nums[i];
            }
        }

        // Step 3: Fill remaining positions with 0
        while (index < n) {
            nums[index++] = 0;
        }

        return nums;
    }
};
