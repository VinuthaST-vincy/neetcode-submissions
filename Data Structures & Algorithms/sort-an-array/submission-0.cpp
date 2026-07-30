class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()<=1){
         return nums;
        }
        int mid=nums.size()/2;
        vector<int> left(nums.begin(),nums.begin()+mid);
        vector<int> right(nums.begin()+mid, nums.end());
        left=sortArray(left);
        right=sortArray(right);
        return MergeSort(left, right); 
   }
   vector<int> MergeSort(vector<int> left, vector<int> right){
      int i=0,k=0,j=0;
      vector<int> sorted;
      while(i<left.size()&&j<right.size()){
         if(left[i]<right[j]){
            sorted.push_back(left[i]);
            i++;
         }
         else{
            sorted.push_back(right[j]);
            j++;
         }
      }
      while(i<left.size()){
         sorted.push_back(left[i]);
         i++;
      }
      while(j<right.size()){
         sorted.push_back(right[j]);
         j++;
      }
      return sorted;
   }
};