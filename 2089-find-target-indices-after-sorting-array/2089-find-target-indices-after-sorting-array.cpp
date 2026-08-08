class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int firstindex=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int secondindex=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        vector<int> ans;
        for(int i=firstindex; i<secondindex; i++)
        {
            ans.push_back(i);
        }
        return ans;
    }
};