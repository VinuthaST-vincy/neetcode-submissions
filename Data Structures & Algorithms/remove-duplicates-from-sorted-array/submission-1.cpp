class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> dup;
        int k=0;
        for(int n:nums){
            if(dup.count(n)==0){
                dup.insert(n);
                nums[k]=n;
                k++;
            }
           
        }
        return k;
    }
};