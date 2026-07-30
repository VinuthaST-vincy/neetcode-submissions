/*The characters before a # (at some position) represent the length of the next string.
Right after that #, you read exactly that many characters — that's the actual string.
Then whatever comes right after that is the start of the length of the next string.
*/
class Solution {
public:

    string encode(vector<string>& strs) {
       string result="";
       for(int i=0;i<strs.size();i++){
        result +=to_string(strs[i].size())+"#"+strs[i];
       }
       return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j] != '#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            string word=s.substr(j+1, length);
            result.push_back(word);
            i=length+j+1;

        }
        return result;

    }
};
