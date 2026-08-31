class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastSeen; // value -> most recent index

        for (int i = 0; i < nums.size(); i++) {
            if (lastSeen.find(nums[i]) != lastSeen.end()) {
                // we've seen this value before, check the distance
                if (i - lastSeen[nums[i]] <= k) {
                    return true;
                }
            }
            // update (or insert) the most recent index for this value
            lastSeen[nums[i]] = i;
        }

        return false;
    }
};