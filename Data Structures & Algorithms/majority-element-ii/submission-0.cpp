class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int> result;
        for(auto& p:freq){
            if(p.second>nums.size()/3){
                result.push_back(p.first);
            }
        }
        return result;
    }
};