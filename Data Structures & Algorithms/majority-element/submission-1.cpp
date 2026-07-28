class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int, int> freq;
       for(int i=0;i<nums.size();i++){
           freq[nums[i]]++;
       }
       for(auto& p:freq){
        if(p.second>nums.size()/2){
            return {p.first};
        }
       }
       return {};

    }
};