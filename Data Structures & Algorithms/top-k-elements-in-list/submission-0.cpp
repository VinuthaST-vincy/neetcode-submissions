class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        //finding the frequency 
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        //after getting its frequency, now to return the top, there is a need of some sorting to faster accessing the k top. 
        //taking as minheap cuz, i need the top ele, so the smallest sitting at the top which means it is getting ready to be evicted.
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
        for(auto& p:freq){
            //p.second, cuz by default heap compares pair of first by default, and we rank be frequency so p.second at pair of first.
            minheap.push({p.second, p.first});
            //when top k is exceded, which means i need top 2 so 3>2 i will evacuate that 3rd top.
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        vector<int> result;
        while(!minheap.empty()){
            //keep adding minheap.top element to the result so at next when poped the top 2nd remains in minheap, repeat for the same and keeps storing until minheap gets empty which are the top shortlisted one.
            result.push_back(minheap.top().second);
            minheap.pop();
        }
        return result;
    }
};
