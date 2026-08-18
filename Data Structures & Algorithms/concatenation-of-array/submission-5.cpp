class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> temp(2*nums.size());
        for(int i=0;i<nums.size();i++){
            int k=nums.size()+i;
            temp[i]=nums[i];
            temp[k]=nums[i];
            k++;
        }
        return temp;
        
    }
};