class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mpp;
        for(string s1 : strs)
        {
            string key=s1;
            sort(begin(key),end(key));
            mpp[key].push_back(s1);
        }
        vector<vector<string>> v1;
        for(auto &it: mpp)
        {
            v1.push_back(it.second);
        }
        return v1;
    }
};