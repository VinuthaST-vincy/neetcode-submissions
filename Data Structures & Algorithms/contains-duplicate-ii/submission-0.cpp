class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;

        for (int i = 0; i < nums.size(); i++) {
            if (i > k) {
                window.erase(nums[i - k - 1]); // remove element that's now outside the window
            }
            if (!window.insert(nums[i]).second) {
                return true; // insert failed → nums[i] was already in the window
            }
        }

        return false;
    }
};