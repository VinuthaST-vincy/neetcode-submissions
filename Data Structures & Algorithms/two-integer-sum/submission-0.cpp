class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> h;
        for(int i=0;i<nums.size();i++){
            int y=target-nums[i];
            if(h.find(y)!=h.end()){
                return {h[y], i};
                break;
            }
            h[nums[i]]=i;
        }
        return {};
    }
};
