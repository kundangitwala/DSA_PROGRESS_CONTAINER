class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string word="";
        vector<string> ans;
        while(ss >> word)
        {
            ans.push_back(word);
        }
        return ans.size();
    }
};