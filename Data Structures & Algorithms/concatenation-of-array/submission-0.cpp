class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];

        }
int n=nums.size();
int i=0;
while(i<nums.size()){
    ans[n]=nums[i];
    n++;
    i++;
}

return ans;

    }
};