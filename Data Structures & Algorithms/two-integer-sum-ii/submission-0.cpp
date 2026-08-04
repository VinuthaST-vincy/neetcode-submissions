class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> sum;
      
        for(int i=0;i<numbers.size();i++){
           int y=target-numbers[i];
           if(sum.find(y)!=sum.end()){
            return {sum[y]+1, i+1};
           }
             sum[numbers[i]]=i;
        }
        return {};
        
    }
};
