class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i=0; i<arr.size() ; i++)
        {
            mpp[arr[i]]++;
        }
        vector<int> ans;
        for(auto it : mpp)
        {
            if(it.first==it.second)
            {
                ans.push_back(it.first);
            }
        }
        if(ans.empty()) return -1;
        return *max_element(ans.begin(),ans.end());

    }
};