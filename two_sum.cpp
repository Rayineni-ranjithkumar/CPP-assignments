#include <iostream>
#include <vector>
using namespace std;

// Function to find two indices whose values add up to the target
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    // Check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; // Return the indices
            }
        }
    }
    return {}; // Return empty if no solution found
}

int main() {
    // Example 1
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
