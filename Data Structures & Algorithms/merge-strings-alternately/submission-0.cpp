class Solution {
public:
    string mergeAlternately(string word1, string word2) {
         string temp;
       
       int i=0;int j=0;
       while(i<word1.size() && j<word2.size())
        {
            temp.push_back(word1[i]);
            temp.push_back(word2[j]);
            i++;j++;
        }
        while(i<word1.size()){
            temp.push_back(word1[i]);
            i++;
        }
         while(j<word2.size()){
            temp.push_back(word2[j]);
            j++;
        }
      
        return temp;
    }
};