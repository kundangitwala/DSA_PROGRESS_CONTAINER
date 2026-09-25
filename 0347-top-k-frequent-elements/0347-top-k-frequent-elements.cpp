class Solution {
public:
    static bool cmp(pair<int,int> &a, pair<int,int> &b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int num : nums)
        {
            mpp[num]++;
        }
        vector<pair<int,int>> v1;
        for(auto it : mpp)
        {
            v1.push_back({it.first,it.second});
        }
        sort(v1.begin(),v1.end(),cmp);
        vector<int> ans;
        for(int i=0; i<v1.size() && i<k; i++)
        {
            ans.push_back(v1[i].first);
        }
        return ans;

    }
};