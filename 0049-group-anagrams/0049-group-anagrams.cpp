class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp1;
        for(string st : strs)
        {
            string temp=st;
            sort(temp.begin(),temp.end());
            mp1[temp].push_back(st);
        }
        vector<vector<string>> ans;
        for(auto it : mp1)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};